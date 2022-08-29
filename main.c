#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, len[5], i;
	char word[50];
	
	scanf("%d", &num);
	
	if(!(num>=1 && num<100000)){
		printf("out of range");
		return 0;
	}
	
	len[0] = num/10000;
	len[1] = (num%10000)/1000;
	len[2] = ((num%10000)%1000)/100;
	len[3] = (((num%10000)%1000)%100)/10;
	len[4] = (((num%10000)%1000)%100)%10;
	
	for(i=0; i<5; i++){
		switch(len[i]){
			case 1:
				word[i] = "³ü";
			break;
			case 2:
				word[i] = "¶L";
			break;
			case 3:
				word[i] = "°Ñ";
			break;
			case 4:
				word[i] = "¸v";
			break;
			case 5:
				word[i] = "¥î";
			break;
			case 6:
				word[i] = "³°";
			break;
			case 7:
				word[i] = "¬m";
			break;
			case 8:
				word[i] = "®Ã";
			break;
			case 9:
				word[i] = "¨h";
			break;
			case 0:
				word[i] = "¹s";
			break;
		}
		printf("%c", word[i]);
		
	}
	printf("¤¸¾ã");

	return 0;
}
