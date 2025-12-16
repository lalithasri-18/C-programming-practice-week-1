#include<stdio.h>
int main()
{
	float base,height,area;
	printf("Enter the base and height lengths of the parallelogram respectively : \n");
	scanf("%f%f",&base,&height);
	area=base*height;
	printf("Area of the parallelogram = %0.2f ",area);
	return 0;
}

