#include <stdio.h>

int main()
{
	const int size = 5;

	float ave[size];
	float max_num = 0.0;

	int i;
	int max_num_site;

	printf("Enter number: ");
	for(i = 0; i < size; i++)
		scanf("%f", &ave[i]);
	

	max_num = ave[0];
	max_num_site = 0;
	for(i = 1; i < size; i++)
		if(ave[i] > max_num){
			max_num = ave[i];
			max_num_site = i;
		}

	printf("max number: %1.2f site of max number:%i\n", max_num, max_num_site + 1);

	return 0;
}
