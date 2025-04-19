#include <stdio.h>

int main()
{
	int get_number = 0;
	int perfect_number = 0;

	int i;
	char ch = 0;
	
	do{
		printf("Enter number: ");
		scanf("%d", &get_number);
		
		for(i = 1; i < get_number; i++){
			if(get_number % i == 0)
				perfect_number += i;
		}
		if(get_number == perfect_number)
			printf("Number is perfect\n");
		else
			printf("Number is not perfect\n");

		printf("Do you wont continue y/n? ");
		getchar();
		ch = getchar();
		if(ch != 'y')
			break;
	}while(1);

		

	return 0;
}
