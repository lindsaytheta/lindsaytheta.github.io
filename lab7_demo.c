#include <stdio.h>
#include <string.h>

/********************
This function prints the string passed to it as a parameter in reverse. 
You may assume that the input string consists of one word only with no spaces.

Signature of printReverse: (char []) -> void

Example: call to printReverse("Hello") will print "olleH". 
************/

void printReverse(char a[SIZE]) {

}


/****************
This function called reverseString reverses the contents of the 
string that is passed to it as a parameter.

You may assume that the input string consists of one word only 
with no spaces.

Note that the function does NOT print the string in reverse, it 
actually reverses it in memory.

Signature of reverseString: (char []) -> void

Example: 
aString = "Hello" 
Call to reverseString(aString), will modify the content of aString to "olleH" 
********/

void reverseString(char stringArray[SIZE]) {

}

/*************
main
***/

int main(){

    char aString[SIZE];

    printf("Enter a string:");
    scanf("%s", aString);

    printf("Original String: %s\n", aString);
    printf("\n");

    printf("aString printed in reverse: ");
    printReverse(aString);
    printf("\n");

    reverseString(aString);
    printf("Original string modified to store its reverse: %s\n", aString);
    printf("\n");

    return 0;
}

