#include <stdio.h>
#define MAX 4

struct Movie
{
   int mid;
   char title[30];
   int year;
   char director[30];
};

typedef struct Movie movies;

void readMoreMovies(movies  [],  int, int);
void printOldest(movies [], int);
void printAllMovies(movies[], int);

int main(){

   movies  manyMovies[MAX];         
   int i, nextRead;
   
   for (i=0; i<2; i++)     // read data for 2 movies
   {
	    printf("Enter data for movie number %d \n", i+1);
	    printf("Enter mid:");
	    scanf("%d", &manyMovies[i].mid);
		printf("Enter title:");
		getchar();					//ignore <enter >
		fgets(manyMovies[i].title, 60, stdin);    
	    printf("Enter year:");
		scanf("%d", &manyMovies[i].year);
		getchar();                                 //ignore <enter>
		printf("Enter director:");
		fgets(manyMovies[i].director, 30, stdin);     
   }
   
   nextRead = 2; 				// next movie to read starts at index 2
   
   readMoreMovies(manyMovies, nextRead, MAX);      
   printAllMovies(manyMovies, MAX);
   printOldest(manyMovies, MAX);
   
   return 0;
 }

void printOldest(movies  manyMovies [], int howMany){

}
 
void readMoreMovies(movies  manyMovies [], int nextRead, int howMany){
	
}

void printAllMovies(movies manyMovies[], int howMany){

}
