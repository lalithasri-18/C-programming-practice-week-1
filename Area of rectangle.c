#include<stdio.h>
int main()
{
	float l,b,area;
	printf("Enter the length and breath values of the rectangle respectively : \n");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("Area of the rectangle = %0.2f ",area);
	return 0;
}
