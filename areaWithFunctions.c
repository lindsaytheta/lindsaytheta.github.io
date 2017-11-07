#include <stdio.h>
#define PI 3.14159  

//prototypes
double areaCircle(double rad);
double circCircle(double rad);

int main(void)
{
	//declarations and initializations
	double area = 0.0;
	double circ = 0.0;
	double userRadius = 0.0;

	//user input
	printf("Please enter the radius of the circle:\n");
	scanf("%lf", &userRadius);

	//calculations
	area = areaCircle(userRadius);
	circ = circCircle(userRadius);

	//display
	printf("The area of the circle is %lf \n", area);
	printf("The circumference of the circle is %lf\n", circ);

	return 0;
}


double areaCircle(double rad)
{
        double area = 0.0;
        area = PI * rad * rad;
        return area;
}

double circCircle(double rad)
{
        double circ = 0.0;
        circ = 2 * PI * rad;
        return circ;
}
