#include <stdio.h>
#include <string.h>

#define SIZE 30

int main(){

    char sentence [SIZE];
    char secondWord [SIZE];
    int i = 0;
    int j = 0;

    printf("Enter a sentence:");
    fgets(sentence, 30, stdin);

    while (sentence[i] != ' ')  //skip the first word
    {
        i++;
    }

    i = i + 1;                  // get starting position of 2nd word

    j = 0;
    while (sentence[i] != ' ')       // store letters of the second word (until it finds the next space)
    {
	   secondWord[j] = sentence[i];
       i++;
       j++;
    }  

    secondWord[j] = '\0';			// make secondWord a valid string
    printf("Second Word is %s \n", secondWord);

    for (i=0; i < strlen(secondWord); i++)
    {
		printf("%cotter\n", secondWord[i]);          // print each letter of secondWord with suffix "otter"
    }
    return 0;
}
