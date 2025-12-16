#include<stdio.h>
#include<math.h>
int main()
{
	float r,pi,area;
	printf("Enter the value of radius: ");
	scanf("%f",&r);
	pi=3.14;
	area=pi*pow(r,2);
	printf("Area of circle = %0.2f",area);
	return 0;
}
