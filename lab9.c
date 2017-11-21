#include <stdio.h>
#define SIZEC 10

void findAverageNHighest (int [SIZEC], float *, int *);
void printResults (int [SIZEC], float , int );

int main() {

   int anArray[SIZEC] = {13,22,14,55,6,7,18,-9,19,34}, highest;
   float average;
   
   findAverageNHighest (anArray, &average, &highest) ;
   printResults (anArray, average, highest);

   return 0;
}
   
void findAverageNHighest (int anArray[SIZEC], float * average, int * highest){

   float sum = 0.0;
   int i;
  
   *highest = anArray[0];

   for (i=0; i < SIZEC; i = i + 2)
   {
     sum = sum + anArray[i];
    
     if (anArray[i] > (*highest))
     {
       *highest = anArray[i];
     }
   }
 
   *average = (float) sum / (SIZEC/2);
}

void printResults (int anArray[SIZEC], float avg, int high)
{
   
   int i;
   printf("Given array is: ");
 
   for (i=0; i < SIZEC; i++)
   {
      printf("%d ", anArray[i]);
   }
   printf("\n");

   printf("Average of elements at even indices = %.2f \n", avg);
   printf("Highest value among all elements at even indices = %d \n", high);
}
