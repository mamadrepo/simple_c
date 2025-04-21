#include <stdio.h>

char upper(char);

int main()
{
	printf("Enter an character: ");
	char ch = getchar();

	printf("Result: %c\n", upper(ch));
	return 0;
}

char upper(char ch){
	if(ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ch;
}
