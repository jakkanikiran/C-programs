#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

line(100,100,100,200);  //Vertical Line
line(70,150,100,150);   //Middle Line Dividing Vertical Line

line(100,100,150,150);  //Slant Line From Top to Bottom
line(100,200,150,150);  //Slant Line From Bottom to Top

line(150,100,150,200);  //Vertical Line

line(150,150,250,150);  //Horizontal Line

getch();
closegraph();
}

