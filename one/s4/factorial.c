#include <stdio.h>

unsigned long fact(int);


int main()
{
	printf("Enter number to calculate: ");
	int num;
	scanf("%i", &num);
	printf("Num-> %d, Factorial-> %ld\n", num, fact(num));

	return 0;
}

unsigned long fact(int num){
	if(num != 0)
		return (num * fact(num - 1));
	else 
		return 1;
}

