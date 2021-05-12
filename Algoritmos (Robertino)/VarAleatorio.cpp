#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int i;
	printf("Gerando 10 valores aleatorios\n");
	
	for(i=0; i<5; i++){
		printf("\n%d\n", rand() %5);
	}
	
	getch();
	
	
	return 0;
}
