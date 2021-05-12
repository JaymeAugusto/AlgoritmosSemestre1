#include<stdio.h>
#include<string.h>
int main(){
	char nome[50],nome2[]="beatriz";
	int i;
	printf("Digite seu nome:\t");
	scanf("%s",nome);
	
	for(i=0; i<strlen(nome); i++){
		printf("%c\n",nome[i]);
	}
	
	if(strcmp(nome,"beatriz")==0){ //comparar strings 
		printf("eu nome e beatriz\n");
	}
	else{
		printf("seu nome nao e beatriz\n");
	}
	
	
	
	return 0;
}
