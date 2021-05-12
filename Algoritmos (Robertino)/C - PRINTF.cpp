#include<stdio.h>
int main() {
	int idade;
	float peso;
	printf("Ola mundo\n");
	printf("Valor da soma: %.2f \n", 5.6+3.9);
	printf("valores: %d %.0f %c \n",9, 8.8 , 'c');
	printf("Digite sua idade e peso:");
	scanf("%d",&idade);
	scanf("%f",&peso);
	printf("Voce tem %d anos de idade e %.2f de peso.\n", idade, peso);
	
	return 0;
}
