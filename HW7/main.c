#include <stdio.h>
#include <stdlib.h>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



struct _Employee{
	char Name[30];
	char Phone[20];
	char Mail[30];
};

typedef struct _Employee Employee;

void counter(int *num);

int main(int argc, char *argv[]) {
	char op, fname[20];
	int i, num=0;
	Employee P[N];
	FILE *f1;
	
	while(1){
		//puts("i: ���J");
		//puts("l: �C�X");
		//puts("s: �s��");
		//puts("o: Ū��");
		//puts("q: ����");
		scanf(" %c", &op);
		
		switch(op){
			case 'i':
				//printf("�m�W: ");
				scanf("%s", &P[num].Name);
				//printf("�q��: ");
				scanf("%s", &P[num].Phone);
				//printf("Email: ");
				scanf("%s", &P[num].Mail);
				//printf("���J����\n");
				counter(&num);
				break;
			case 'l':
				for(i=0; i<num; i++){
					//printf("No.%d:\n", i+1);
					printf("Name: %s\n", P[i].Name);
					printf("Phone: %s\n", P[i].Phone);
					printf("Email: %s\n", P[i].Mail);
					//printf("=================\n") ;
				}
				break;
			case 's':
				// write file
				//printf("�п�J�ɦW(.txt): ");
				scanf("%s", &fname);
				f1 = fopen(fname, "w");
				fprintf(f1, "%d\n", num);
				for(i=0; i<num; i++){
					fprintf(f1, "%s\t", P[i].Name);
					fprintf(f1, "%s\t", P[i].Phone);
					fprintf(f1, "%s\n", P[i].Mail);
				}
				fclose(f1);
				//printf("�s�ɧ���!\n");
				break;
			case 'o':
				// read file
				//printf("�п�J�ɦW(.txt): ");
				scanf("%s", &fname);
				f1 = fopen(fname, "r");
				fscanf(f1, "%d", &num);
				for(i=0; i<num; i++){
					fscanf(f1, "%s\t", P[i].Name);
					fscanf(f1, "%s\t", P[i].Phone);
					fscanf(f1, "%s\n", P[i].Mail);
				}
				fclose(f1);
				//printf("Ū�ɧ���!\n");;
				break;
			case 'q':
				//puts("�A��");
				return 0;
		}
		system("pause");
		system("cls");
		
	}
	return 0;
}

void counter(int *num)
{
	*num += 1;
}
