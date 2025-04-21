#include <stdio.h>

float area(float);

int main()
{
	float r;
	float result;
	
	printf("Enter radius: ");
	scanf("%f", &r);

	result = area(r);
	printf("Result: %2.3f\n", result);


	return 0;
}

float area(float r){return( r * r * 3.14);}
