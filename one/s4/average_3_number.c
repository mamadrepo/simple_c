#include <stdio.h>

float ave(float one, float two, float three){
	float sum = 0.0;
	sum = one + two + three;
	return sum /= 3;
}

int main()
{
	float one;
	float two;
	float three;

	printf("Enter three number: ");
	scanf("%f%f%f", &one, &two, &three);
	
	float result = ave(one, two, three);
	
	printf("Average -> %1.3f\n", result);


	return 0;
}
