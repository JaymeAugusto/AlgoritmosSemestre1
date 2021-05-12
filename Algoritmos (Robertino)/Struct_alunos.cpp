#include<stdio.h>
struct Alunos{
	char nome[50];
	int idade;
	float nota[4];	
};

int main(){
	struct Alunos ti[10];
	float media=0;
	int i,j;
	
	for(i=0; i<10; i++){
		printf("\t Digite o nome do aluno %d: ",i+1);
		scanf("%s",ti[i].nome);
		printf("\t Digite a idade do aluno: ");
		scanf("%d",&ti[i].idade);
		
		for(j=0; j<4; j++){
			printf("\t Digite a nota %d:  ",j+1);
			scanf("%f",&ti[i].nota[j]);
		}
	}	
	
	for(i=0; i<10; i++){
		media=0;
		
		for(j=0; j<4; j++){
			media+= ti[i].nota[j];
		}
		media /= 4;
		if(ti[i].idade >= 18){
			printf("\t A media do aluno %s e %.2f \n",ti[i].nome,media);
		}
	}
	
	return 0;
}
