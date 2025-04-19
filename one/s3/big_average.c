#include <stdio.h>

int main()
{
	int big_id = 0;
	float big_average = 0;
	int while1 = 1;

	int get_id = 0;
	float get_average = 0;


	do{
		printf("Enter id: ");
		scanf("%d", &get_id);
		if(get_id == -1){
			printf("Biggest average id: %d\n", big_id);
			printf("Biggest average: %f\n", big_average);
			break;
		}
		printf("Enter average: ");
		scanf("%f", &get_average);

		if(get_average > big_average){
			big_average = get_average;
			big_id = get_id;
		}

	}while(while1);

	return 0;
}

