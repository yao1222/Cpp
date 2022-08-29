#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int num, input;
	
	scanf("%d", &num);
	if(!(num>0 && num<2000000000)){
		printf("Wrong Password Setting!");
		return 0;
	}
	
	while(1){
		scanf("%d", &input);
		if(input == num){
			printf("Correct!");
			break;
		}
		printf("Wrong Password!\n");
	}
	
	return 0;
}
