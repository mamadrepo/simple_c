#include <stdio.h>

void convert(float, int);

int main()
{
	printf("[1] -> cm\n");
	printf("[2] -> meter\n");
	printf("[3] -> inch\n");
	printf("[4] -> foot\n");
	return 0;
}

void convert(float num, int choose){
	if(choose == 1){
		printf("m -> %1.4f\n", num / 100);
		printf("inch -> %1.4f\n", num / 2.54);
		printf("foot -> %1.4f\n", num / 30.48);	
	}
	else if(choose == 2){
		float cm = num * 100;
		printf("cm -> %1.4f\n", cm);
		printf("inch -> %1.4f\n", cm / 2.54);
		printf("foot -> %1.4f\n", cm / 30.48);
	}
	else if(choose == 3){
		float cm = num * 2.54;
		printf("cm -> %1.4f\n", cm);
		printf("m -> %1.4f\n", cm / 100);
		printf("foot -> %1.4f\n", cm / 30.48);
	} 
	else if(choose == 4){
		float cm = num * 30.48;
		printf("cm -> %1.4f\n", cm);
		printf("m -> %1.4f\n", cm / 100);
		printf("inch -> %1.4f\n", cm / 2.54);
	}
}
