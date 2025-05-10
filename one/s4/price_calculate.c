#include <stdio.h>

#define LOW 0.05
#define HIGH 0.1
#define NUM 7

float price(float, int);
void show_result(float, int, float);

int main()
{
	float wholesale;
	float retail;
	
	int times;

	char ch = 'y';
	return 0;
}

float price(float wholesale, int times){
	if(times <= NUM)
		return (wholesale + wholesale * LOW);
	return (wholesale + wholesale * HIGH)
}

void show_result(float wholesale, int times, float retail){
	printf("Wholesale = %f, Times = %f\n", wholesale, times);
	printf("Retail = %f\n", retail);
}
