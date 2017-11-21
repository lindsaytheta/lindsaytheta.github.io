#include <stdio.h>
#include <string.h>

#define SIZE 30

void mergeWords(char [SIZE], char [SIZE]);

int main(){

	char aString[SIZE], mergedString[SIZE] = "";
	
	mergeWords("", mergedString);

	printf("Original string: %s\n ", aString);
	printf("Expected Output: %s\n ", "");
	printf("Actual Output: %s \n", mergedString);
	
	mergeWords("Program", mergedString);

	printf("Original string: %s\n ", aString);
	printf("Expected Output: %s\n ", "Program");
	printf("Actual Output: %s \n", mergedString);
	
	mergeWords("I can program now", mergedString);

	printf("Original string: %s\n ", aString);
	printf("Expected Output: %s\n ", "Icanprogramnow");
	printf("Actual Output: %s \n", mergedString);
	printf("\n");

   return 0;
}

void mergeWords(char oS[SIZE], char mS[SIZE])
{
    int i, j;

    i = 0;
    j = 0;
    while (i<strlen(oS))
    {

      if (oS[i] != ' ')
      {
         mS[j] = oS[i];
         j++;
         i++;
      }
      else 
      {
         i++;  
      }
 
    }
   mS[j] = '\0';
}
