#include <stdio.h>
#include <string.h>

#define SIZEH 30

void giveMeEven(char first[SIZEH], char second[SIZEH], int * lenSecond);
void printResults(char first [SIZEH], char second [SIZEH], int lenSecond);

int main(){

  char first[SIZEH] = "Dumbledore";
  char second[SIZEH] = "Harry";        //"";
  int lenSecond;

  giveMeEven(first, second, &lenSecond);
  printResults(first, second, lenSecond);
}

void giveMeEven(char first[SIZEH], char second[SIZEH], int * lenSecond){

   int i, j=0;

   if (strlen(second) != 0)
   {
      strcpy(second, "");
   }

   for (i=0; i < strlen(first); i = i + 2)
   {
     second[j] = first[i];
     j++;
   }
   second[j] = '\0';
   *lenSecond = strlen(second);
}

void printResults(char first[SIZEH], char second[SIZEH], int lenSecond)
{
   printf("Original string = %s \n", first);
   printf("Shorter string = %s \n", second);
   printf("Length of the shorter string is %d\n", lenSecond);
}
