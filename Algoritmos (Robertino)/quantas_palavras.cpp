#include<stdio.h>
#include<string.h>
int main(){
	char frase[100]	;
	int palavras=1,i;		
	fgets(frase,100,stdin); // escreve uma frase com espaços
	for(i=0; i<strlen(frase); i++){ 
		if(frase[i]==' '){
			palavras++;
		}
	}
	
	printf("voce escreveu %d palavras",palavras);
	
	return 0;
}

