#include <stdio.h>

void fib(int);

int main()
{
	int i;
	printf("Enter number: ");
	scanf("%d", &i);
	fib(i);
	
	return 0;
}

void fib(int i){
	static int one = 0;
	static int two = 1;
	static int sum = 0;
	if(i > 0)
		fib(i - 1);
	
	printf("%d\n", sum);
	sum = one + two;
	one = two;
	two = sum;

}

