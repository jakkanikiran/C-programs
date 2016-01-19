   #include <stdio.h>
   #include <stdarg.h>
   #include <unistd.h>
   /* error:  print an error message and die */

    int main() {
   void error(char *fmt, ...)
   {
       va_list args;

       va_start(args, fmt);
       fprintf(stderr, "error: ");
       fprintf(stderr, fmt, args);
       fprintf(stderr, "\n");
       va_end(args);
  //     exit(1);
    //   return 0;
   }
}
