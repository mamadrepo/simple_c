#include <stdio.h>

int main()
{
	const int size = 10;
	int arr[size];
	int negative_number = 0;
	int positive_number = 0;

	printf("Enter 10 number: ");

	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("Negatives number\n");
	for(int i = 0; i < size; i++)
		if(arr[i] < 0){
			printf("%d\n", arr[i]); 
			negative_number++;
		}

	printf("Positives numbee\n");
	for(int i = 0; i < size; i++)
		if(arr[i] > 0){
			printf("%d\n", arr[i]);
			positive_number++;
		}

	printf("Number of negatives: %d\n", negative_number);
	printf("Number of postives: %d\n", positive_number);


	return 0;
}
