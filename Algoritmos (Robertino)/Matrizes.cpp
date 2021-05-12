#include<stdio.h>
int main(){
	float notas[5][5];
	int i,j;
	for(i=0;i<5;i++){
		printf("Notas do aluno %d\n",i+1);
		for(j=0;j<4;j++){
			printf("Nota %d:",j+1);
			scanf("%f",&notas[i][j]);
		}
	}
	for(i=0;i<5;i++){
		notas[i][4]=0;
		printf("As notas do aluno %d sao:\n",i+1);
		for(j=0;j<4;j++){
			printf("[%4.1f]",notas[i][j]);
			notas[i][4]+= notas[i][j]; //notas[i][4] = notas[i][4] + notas[i][j]
		}
		notas[i][4]/=4; 
		printf("\n\n");
		printf("Media %.1f\n\n",notas[i][4]);
	}
	
	
	return 0;
}
