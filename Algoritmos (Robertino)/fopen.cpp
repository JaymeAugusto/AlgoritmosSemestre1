 #include<stdio.h>
FILE *arquivo;

void gravaTexto(){
	fputc('A', arquivo);	//grava o caracter no arquivo
	fputc('B', arquivo);
	fputc(67, arquivo);
	char str1[] = "Universidade Federal do Parana"; 
	fwrite(str1, sizeof(char), 31, arquivo);
	char str2[] = "rafao no bloco de notas";
	fprintf(arquivo, "%s\n", str2);
}
void leTexto(){
	char a = fgetc(arquivo);
	char b = fgetc(arquivo);
	char c = fgetc(arquivo);
	char str1[31];
	fread(str1, sizeof(char), 31, arquivo);
	char str2[23];
	fscanf(arquivo, "%s", str2);
	printf("Conteudo lido:\n");
	printf("A: %c,B: %c, C: %c\n",a,b,c);
	printf("Str1: %s\n",str1);
	printf("Str2: %s\n",str2);	
}

void leCaracteres(){
	char c;
	while(1){
		if(feof(arquivo)){
			break;
		}
		c = fgetc(arquivo);
		printf("%c",c);
	}
}

int main(){	
	arquivo = fopen("teste.txt", "w+");  //abre o arquivo , se nao tiver ele cria o arquivo
	if(arquivo == NULL){ //verifica se tem o arquivo
		printf("Deu ruim! Nao consegui abrir\n");
		return -1;
	}
	gravaTexto();
	fclose(arquivo);
	
	arquivo = fopen("teste.txt", "r");  //le o arquivo
	if(arquivo == NULL){ //verifica se tem o arquivo
		printf("Deu ruim! Nao consegui abrir\n");
		return -1;
	}
	//leTexto();
	leCaracteres();
	fclose(arquivo); // fecha o arquivo
	return 0;
}
