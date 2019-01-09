 1 #include <stdio.h>
  2 
  3 int main(int argc, char*argv[]){
  4     if(argc==2){
  5         printf("whhhat whhaaAAt whAaaaDuuuupppp, %snnnn\n", argv[1]);
  6     } else {
  7         fprintf(stderr, "Usage: %s <name>\n", argv[0]);
  8         return 1;
  9     }
 10     return 0;
 11 }
