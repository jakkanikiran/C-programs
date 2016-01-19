
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_LINES_PER_CASE 3
/* Structre for holding the records once loaded from the file */
typedef struct tagTEST_CASES
{
	unsigned short numNumOfGangs;
	unsigned short* pNumHowOften;
	unsigned short numSpanDays;
} TEST_CASES;
int main(int argc, char** argv)
{
	auto	FILE* pFile = NULL;
	auto	TEST_CASES* pArrTestCases = NULL;
	auto	char* pStrToken		= 0;
	/**/
	auto	char strData[128]		= {'\0'};
	/**/
	auto	int intNumTestCases	= 0;
	auto	int intGangLoop		= 0;
	auto	int intCaseLoop		= 0;
	auto	int intSpanLoop		= 0;
	
	/* If user has not specified a file, show usage message */
	if(argc < 2)
	{
		puts("TestCases fileName\n\twhere filename is the test case input file");
		return 1;
	}
	
	/* If the input file is not found or not readable, quit with message */
	if(NULL == (pFile = fopen(argv[1], "r+b")))
	{
		puts("Cannot open input file.");
		return 2;
	}
	
	/* Read the first line to get the number of test cases */
	if(NULL != fgets(strData, sizeof(strData), pFile))
	{
		intNumTestCases = atoi(strData);
	}
	
	/* Adjust the size of the test case elements based on the number of cases */
	pArrTestCases = (TEST_CASES*)  malloc(sizeof(TEST_CASES)*intNumTestCases);
	
	/* Loop through each of the test cases */
	for(intCaseLoop=0; intCaseLoop < intNumTestCases; intCaseLoop++)
	{
		if(feof(pFile))
		{
			break;
		}
		
		/* get the number of gangs and store it in the structure */
		fgets(strData, sizeof(strData), pFile);	
		pArrTestCases[intCaseLoop].numNumOfGangs = (unsigned short) atoi(strData);
		
		/* get the "hit" rate and adjust the "how often" array */
		fgets(strData, sizeof(strData), pFile);
		pArrTestCases[intCaseLoop].pNumHowOften =
			(unsigned short*) malloc(
				sizeof(unsigned short)*pArrTestCases[intCaseLoop].numNumOfGangs);
		
		/* convert the "how often" array into the structure */
		intGangLoop = 0;
		pStrToken = strtok(strData, " ");
		while(NULL != pStrToken)
		{
			pArrTestCases[intCaseLoop].pNumHowOften[intGangLoop++] =
			 (unsigned short) atoi(pStrToken);
			pStrToken = strtok(NULL, " ");
		}
		
		/* Get the span of days */
		fgets(strData, sizeof(strData), pFile);
		pArrTestCases[intCaseLoop].numSpanDays = (unsigned short) atoi(strData);
	}
	fclose(pFile);
	
	/* Display the days the store will be "hit" */
	for(intCaseLoop=0; intCaseLoop < intNumTestCases; intCaseLoop++)
	{	/* for each test case */
		for(intSpanLoop=0; intSpanLoop < pArrTestCases[intCaseLoop].numSpanDays; intSpanLoop++)
		{	/* for each day in the span */
			for(intGangLoop=0; intGangLoop < pArrTestCases[intCaseLoop].numNumOfGangs; intGangLoop++)
			{	/* for each gang */
				if(0 == (intSpanLoop % pArrTestCases[intCaseLoop].pNumHowOften[intGangLoop]))
				{	/* Tell when hit */
					printf("%d ", intSpanLoop+1);
				}
			}
		}
		
		printf("\n");	// separate test cases
	}
	
	/* clean up allocated memory */
	for(intCaseLoop=0; intCaseLoop < intNumTestCases; intCaseLoop++)
	{
		free(pArrTestCases[intCaseLoop].pNumHowOften);
	}
	
	free(pArrTestCases);
	
	return 0;
}

