#include <stdio.h>

float calculate(float, float, int);

int main()
{
	float balance;
	float rate;
	int month;

	printf("Enter balance: ");
	scanf("%f", &balance);

	printf("Enter rate per month: ");
	scanf("%f", &rate);

	printf("Enter month: ");
	scanf("%i", &month);

	float result = calculate(balance, rate, month);

	printf("Benefit: %f\n", result);
	printf("Balance: %f\n", balance);
	printf("Total balance: %f\n", result + balance);


	return 0;
}

float calculate(float balance, float rate, int month){
	int i;
	float ben;
	float result = 0;

	for(i = 0; i < month; i++){
		ben = balance * rate / 100;
		balance += ben;
		result += ben;
	}

	return result;
}
