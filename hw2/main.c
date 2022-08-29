#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, m, n;
	//scanf("%d%d", &m, &n);
	
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}
