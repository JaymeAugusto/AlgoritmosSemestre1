#include<stdio.h>
struct Aluno{
	char nome[50];	
	float nota[2];
};

int main(){
	struct Aluno alunos[3];
	float media=0;
	int i,j;
	
	for(i=0; i<3; i++){
		printf("\n Digite o nome do aluno\n");
		scanf("%s",alunos[i].nome);
		
		for(j=0; j<2; j++){
			printf("Digite a nota %d: ",j+1);
			scanf("%f",&alunos[i].nota[j]);
		}
	}
	
	for(i=0; i<3; i++){
		media=0;	
		
		for(j=0; j<2; j++){
			media+= alunos[i].nota[j];
		}
		media/=2;
		printf("\n A media do aluno %s foi %.2f\n",alunos[i].nome, media);
	}

	
	
	return 0;
}
