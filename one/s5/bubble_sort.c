#include <stdio.h>

void get_input(int [], int);
void bubble(int [], int);
void show_result(int[], int);

int main()
{

	return 0;
}

void get_input(int arr[], int len){
	int i;
	for(i = 0; i < len; i++){
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}
