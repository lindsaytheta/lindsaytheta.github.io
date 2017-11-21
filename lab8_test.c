#include <stdio.h>
#include <string.h>

#define SIZE 30

void printReverse(char [SIZE]);
void reverseString(char [SIZE]);

int main(){

	char aString[SIZE];
	
	//test case 1 - single word
	strcpy(aString, "hello");    

	printf("Original String: %s\n", aString);
	printf("\n");

	printf("Expected output: %s \n", "olleh");	

	printf("Actual output: ");
	printReverse(aString);
	printf("\n");

	reverseString(aString);
        
	printf("Expected output: %s \n", "olleh");
	printf("Actual output: %s\n", aString);
	printf("\n");

	//test case 2 - multiple words 
		
	strcpy(aString, "i can program now");  

	printf("Original String: %s\n", aString);
	printf("\n");

	printf("Expected output: %s \n", "won margorp nac i");

	printf("Actual output: ");
	printReverse(aString);
	printf("\n");

	reverseString(aString);

	printf("Expected output: %s \n", "won margorp nac i");
	printf("Actual output: %s\n", aString);
	printf("\n");

   return 0;
}

void printReverse(char a[SIZE]){

	int i;
	
	for (i=strlen(a)-1; i >= 0; i--)
	{
		printf ("%c", a[i]);
	}

}

void reverseString(char a[SIZE]){

	int i, back, front;
	char tempChar;    //used to swap 2 characters
	
	i=0;
	
	while (a[i] != '\0'){
		i++;
	}
	
	back = i-1;
	front = 0;
	
	while (back > front){
		tempChar = a[back];
		a[back] = a[front];
		a[front] = tempChar;
		back--;
		front++;
	}
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
