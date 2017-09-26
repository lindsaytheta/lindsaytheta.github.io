#include <stdio.h>
#define PI 3.14159  

int main(void)
{
	//declarations and initializations
	double circleArea = 0.0;
	double circleCirc = 0.0;
	double userRadius = 0.0;

	//user input
	printf("Please enter the radius of the circle:\n");
	scanf("%lf", &userRadius);

	//calculations
	circleArea = PI * userRadius * userRadius;
	circleCirc = 2 * PI * userRadius;

	//display
	printf("The area of the circle is %lf \n", circleArea);
	printf("The circumference of the circle is %lf\n", circleCirc);

	return 0;
}
