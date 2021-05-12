#include<stdio.h>
void alterar(int *x,int *y,int *z){
	printf("valores recebidos: %d,%d,%d\n",*x,*y,*z);
	++*x; ++*y; ++*z;
	printf("Valores alterados: %d,%d,%d\n",*x,*y,*z);
}
int main(){
	int a=5, b=15, c=25;
	alterar(&a,&b,&c);
	printf("Valores fora da funcao: %d,%d,%d\n",a,b,c);
	
	
	return 0;
}
