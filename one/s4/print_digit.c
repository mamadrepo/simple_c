#include <stdio.h>

void print_digit(int);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	print_digit(num);

	return 0;
}

void print_digit(int num){
	if(num < 10)
		printf("%d\n", num);
	else{
		print_digit(num / 10);
		printf("%d\n", num % 10);
	}
}

