/****************
You are given a function called mergeWords that takes 2 string parameters. 
The first parameter (oS) is a sentence, given as input to the function. 
The second parameter (mS) must be an empty string (""). 
The function merges all words in oS together and stores the result 
in mS (so that mS now has the same content as oS minus the spaces).

Signature of mergeWords: (char [SIZE], char [SIZE]) -> void

Example: 
char aString [SIZE] = "I can program now";
char mString [SIZE] = "", 

Call to mergeWords(aString, mString) modifies mString so that it 
now stores "Icanprogramnow".
/***************

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
