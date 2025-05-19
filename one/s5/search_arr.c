#include <stdio.h>
 
void get_input(int [], int);
int search(int [], int, int);

int main()
{
	const int size = 5;
	int arr[size];
	int obj;

	printf("Enter %i id\n", size);
	get_input(arr, size);

	printf("Enter id you want search: ");
	scanf("%d", &obj);

	if(search(arr, size, obj))
		printf("Id exist!\n");
	else
		printf("Id not found\n");

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
