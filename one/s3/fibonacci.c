#include <stdio.h>

int main()
{
	int one = 0;
	int two = 1;
	int sum;

	printf("0\t");
	for(int i = 0; i < 20; i++){
		sum = one + two;
		printf("%d\n", sum);
		one = two;
		two = sum;
	}

	return 0;
}


