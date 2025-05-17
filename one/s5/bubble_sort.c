#include <stdio.h>

void get_input(int [], int);
void bubble(int [], int);
void show_result(int[], int);

int main()
{
	const int size = 5;
	int arr[size];

	printf("Enter %d number\n", size);
	get_input(arr, size);

	bubble(arr, size);

	printf("After sort:\n");

	show_result(arr, size);

	return 0;
}

void get_input(int arr[], int len){
	int i;
	for(i = 0; i < len; i++){
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}

void bubble(int arr[], int len){
	int i;
	int j;
	int item;

	for(i = len - 1; i > 0; i--)
		for(j = 0; j < i; j++)
			if(arr[j] > arr[j + 1]){
				item = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = item;
			}
}

void show_result(int arr[], int len){
	for(int i = 0; i < len; i++)
		printf("%d\n", arr[i]);
}

