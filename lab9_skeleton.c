#include <stdio.h>
#define SIZEC 10

void findAverageNHighest (int [SIZEC], float *, int *);
void printResults (int [SIZEC], float , int );

int main() {

   int anArray[SIZEC] = {13,22,14,55,6,7,18,-9,19,34};
   int highest;
   float average;
   
   findAverageNHighest (anArray, &average, &highest) ;
   printResults (anArray, average, highest);

   return 0;
}
   
/*
This function takes an array of SIZEC integers as a parameter. 
It then finds:
(1) average of all elements at even indices (i.e. at positions 0, 2, 4, 6, 8) and 
(2) highest value among all elements at even indices.
*/   
void findAverageNHighest (int anArray[SIZEC], float * average, int * highest){

}

/*
This function takes an array of SIZEC integers as a parameter.
It then prints the array, the average and highest value computed by
findAverageNHighest.
*/
void printResults (int anArray[SIZEC], float avg, int high){
   
}
