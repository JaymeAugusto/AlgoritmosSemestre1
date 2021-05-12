#include<stdio.h>
#include<stdlib.h>
int main(){
	char nome1[20],nome2[20],nome[10];
	scanf("%s", nome1);
	scanf("%s", nome2);
	printf("Primeiro nome:%s\n",nome1);
	printf("Segundo nome:%s\n",nome2);
	fputs(nome1, stdout);
	printf("Digite o nome:\n");
	fflush(stdin); //Digita o nome inteiro ate com espaços
	fgets (nome,10,stdin);  //trabalha com espaços tambem entre os caracteres
	return 0;
	
}
