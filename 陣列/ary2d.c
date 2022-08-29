#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

# define CLS 5
# define STU 3

int main(int argc, char *argv[]) {
	int i, j, sum, total, hidx;
	double avg, high;
	int ary1[CLS][STU] = {76, 73, 85, 88, 84, 76, 92, 82, 92, 82, 91, 85, 72, 74, 73};
	
//	for(i=0; i<CLS; i++){
//		for(j=0; j<STU; j++){
//			scanf("%d", &ary1[i][j]);
//		}
//	}
	
	total = 0;
	hidx = 1;
	high = 0;
	for(i=0; i<CLS; i++){
		printf("student %d\n", i+1);
		sum = 0;
		for(j=0; j<STU; j++){
			printf(" %d: %d\n", j+1, ary1[i][j]);
			sum += ary1[i][j];
		}
		total += sum;
		printf(" sum: %d\n", sum);
		avg = (double)sum/STU;
		printf(" avg: %.2f\n", avg);
		if(avg>high){
			high = avg;
			hidx = i+1;
		}
	}
	
	printf("total: %d, avg: %.2f\n", total, total/15.0);
	printf("highest avg: student %d: %.2f\n", hidx, high);
	return 0;
}
