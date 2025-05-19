#include <stdio.h>
 
void get_input(int [], int);
int search(int [], int, int);

int main()
{

	return 0;
}

void get_input(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("Enter student id %i: ", i + 1);
		scanf("%d", &arr[i]);
	}
}

int search(int arr[], int len, int obj){
	for(int i = 0; i < len; i++)
		if(arr[i] == obj)
			return 1;
	return 0;
}
