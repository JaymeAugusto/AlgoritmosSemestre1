#include<stdio.h>
#include<stdlib.h>
int main(){
	int passa = 0, op2 = 0, volta = 0;
	//PRIMEIRA CAMADA
	printf("\n\n\t\tCONSTROCAO DO CUBO MAGICO\n\n");
	printf("-------------------------------------------------------\n");
	printf("\t\t\t 1 CAMADA\n");
	printf("-------------------------------------------------------\n");
	printf("\t     ESCOLHA UMA COR FIXA PARA COMECAR\n");
	printf("-------------------------------------------------------\n");
	printf("\n\t\t       INICIO = CRUZ\n\n");
	printf("\t\t\t[ ][*][ ]\n\t\t\t[*][*][*]\n\t\t\t[ ][*][ ]\n\n");
	printf("\t\tParte de cima ^^\n");
	printf("-------------------------------------------------------\n");
	printf("[-FRENTE-] [-CIMA-] [-ESQUERDA ANTI-] [-CIMA ANTI-]\n");
	printf("-------------------------------------------------------\n");
	printf("\nSE DESEJA CONTINAR PRESSIONE '1'\n");
	
	while(passa != 1 && passa != 1){
		scanf("%d",&passa);
	}
	//CANTOS
	system("cls");
	passa = 0;
	printf("\n\t\t\tCANTOS\n");
	printf("-------------------------------------------------------\n");
	printf("\t   POSICIONE O CANTO NO LUGAR CERTO\n");
	printf("-------------------------------------------------------\n");
	printf("\t\t\t[ ][ ][ ]\n\t\t\t[ ][ ][ ]\n\t\t\t[ ][ ][*]\n\n");
	printf("\t\tParte da frente ^^\n");
	printf("-------------------------------------------------------\n");
	printf("[-DIREITA ANTI-] [-BAIXO ANTI-] [-DIREITA-] [-BAIXO-]\n");
	printf("-------------------------------------------------------\n");
	printf("\nREPITA ATE FICAR NO LUGAR CERTO\n");
	printf("-------------------------------------------------------\n");
	printf("\nSE DESEJA CONTINAR PRESSIONE '1'\n");

	while(passa != 1 && passa != 1){
		scanf("%d",&passa);
	}

	voltaop: 
	//2 CAMADA
	system("cls");
	passa = 0;
	printf("-------------------------------------------------------\n");
	printf("\n\t\t 2 CAMADA\n\n");
	printf("-------------------------------------------------------\n");
	printf("\t 1 CAMADA PARA BAIXO!!!!\n\n");
	printf("-------------------------------------------------------\n");
	printf("***UTILIZAR APENAS PECAS SEM A COR DE CIMA***\n");
	printf("-------------------------------------------------------\n");
	printf("  SE\t\t\t SE\n\t[ ][*][ ]\t\t[ ][*][ ]\n\t[#][ ][ ]\t\t[ ][ ][#]\n\t[*][*][*]\t\t[*][*][*]\n\n\taperte '1'\t\taperte '2'\n\n");
	printf(" * = local da peca\n # = local de desejo\n");
	printf("-------------------------------------------------------\n");
	
	volta2: 
	
	scanf("%d",&op2);
	// PRIMEIRA OPCAO 2
	if(op2 == 1){
		system("cls");
		printf("-------------------------------------------------------\n");
		printf("\n\n\t\t\t[ ][*][ ]\n\t\t\t[#][ ][ ]\n\t\t\t[*][*][*]\n\n");
		printf("-------------------------------------------------------\n\n");
		printf("[-CIMA ANTI-] [-ESQUERDA ANTI-] [-CIMA-] [-ESQUERDA-] \n");
		printf("[-CIMA-] [-FRENTE-] [-CIMA ANTI-] [-FRENTE ANTI-] \n\n");
		printf("-------------------------------------------------------\n\n");
		printf("PRECIONE '1' PARA ESCOLHER O OUTRO LADO OU '2' PARA CONTINUAR\n");
		
		erro:
			
		scanf("%d",&volta);
		
		if(volta == 1){
			goto voltaop;
		}
		else if(volta == 2){
			goto continua;
		}
		else{
			goto erro;
		}
	}
	//SEGUNDA OPCAO 2
	else if(op2 == 2){
		system("cls");
		printf("-------------------------------------------------------\n");
		printf("\n\n\t\t\t[ ][*][ ]\n\t\t\t[ ][ ][#]\n\t\t\t[*][*][*]\n\n");
		printf("-------------------------------------------------------\n\n");
		printf("[-CIMA-] [-DIREITA-] [-CIMA ANTI-] [-DIREITA ANTI-] \n");
		printf("[-CIMA ANTI-] [-FRENTE ANTI-] [-CIMA-] [-FRENTE-] \n\n");
		printf("-------------------------------------------------------\n\n");
		printf("PRECIONE '1' PARA ESCOLHER O OUTRO LADO OU '2' PARA CONTINUAR\n");
		
		erro2:
			
		scanf("%d",&volta);
		
		if(volta == 1){
			goto voltaop;
		}
		else if(volta == 2){
			goto continua;
		}
		else{
			goto erro2;
		}
	}
	
	else{
		goto volta2;
	}
	continua:
	//3 CAMADA 
	
	system("cls");
	passa = 0;
	printf("-------------------------------------------------------\n");
	printf("\n\t\t 2 CAMADA\n\n");
	printf("-------------------------------------------------------\n");
	printf("\t 1 CAMADA PARA BAIXO!!!!\n\n");
	printf("-------------------------------------------------------\n");
	printf("***UTILIZAR APENAS PECAS SEM A COR DE CIMA***\n");
	printf("-------------------------------------------------------\n");
	printf("  SE\t\t\t SE\n\t[ ][*][ ]\t\t[ ][*][ ]\n\t[#][ ][ ]\t\t[ ][ ][#]\n\t[*][*][*]\t\t[*][*][*]\n\n\taperte '1'\t\taperte '2'\n\n");
	printf(" * = local da peca\n # = local de desejo\n");
	printf("-------------------------------------------------------\n");
	
	
	scanf("%d",&op2);
	
	if(op2 == 1){
		system("cls");
		printf("-------------------------------------------------------\n");
		printf("\n\n\t\t\t[ ][*][ ]\n\t\t\t[#][ ][ ]\n\t\t\t[*][*][*]\n\n");
		printf("-------------------------------------------------------\n\n");
		printf("[-CIMA ANTI-] [-ESQUERDA ANTI-] [-CIMA-] [-ESQUERDA-] \n");
		printf("[-CIMA-] [-FRENTE-] [-CIMA ANTI-] [-FRENTE ANTI-] \n\n");
		printf("-------------------------------------------------------\n\n");
		printf("PRECIONE '1' PARA ESCOLHER O OUTRO LADO OU '2' PARA CONTINUAR\n");
		
			
		scanf("%d",&volta);
		
		if(volta == 1){
			goto voltaop;
		}
		else if(volta == 2){
			//goto continua;
		}
		else{
			goto erro;
		}
	}
	
	else if(op2 == 2){
		system("cls");
		printf("-------------------------------------------------------\n");
		printf("\n\n\t\t\t[ ][*][ ]\n\t\t\t[ ][ ][#]\n\t\t\t[*][*][*]\n\n");
		printf("-------------------------------------------------------\n\n");
		printf("[-CIMA-] [-DIREITA-] [-CIMA ANTI-] [-DIREITA ANTI-] \n");
		printf("[-CIMA ANTI-] [-FRENTE ANTI-] [-CIMA-] [-FRENTE-] \n\n");
		printf("-------------------------------------------------------\n\n");
		printf("PRECIONE '1' PARA ESCOLHER O OUTRO LADO OU '2' PARA CONTINUAR\n");
		
			
		scanf("%d",&volta);
		
		if(volta == 1){
			goto voltaop;
		}
		else if(volta == 2){
			//goto continua;
		}
		else{
			goto erro2;
		}
	}
	
	else{
		goto volta2;
	}
	
	
	
	
}
