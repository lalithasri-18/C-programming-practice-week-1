#include<stdio.h>
int main()
{
	float a,b,avg;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	avg=(a+b)/2;
	printf("Average of the given numbers is = %0.2f ",avg);
	return 0;
}
