#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	char st1[256], st2[50];
	int i, count;
	
	gets(st1);
	gets(st2);
	
	count=0;
	for(i=0;i<256;i++){
		if(strcmp(st1, st2)==0){
			printf("O");
			count++;
		}
				
	}
	
	return 0;
}
