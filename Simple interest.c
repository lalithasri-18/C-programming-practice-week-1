#include<stdio.h>
int main()
{
	float P,T,R,S;
	printf("Enter the value of principal amount : ");
	scanf("%f",&P);
	printf("Enter the value of rate of interest : ");
	scanf("%f",&R);
	printf("Enter the time in years : ");
	scanf("%f",&T);
	S=(P*T*R)/100;
	printf("Simple interest = %0.2f",S);
	return 0;
}
