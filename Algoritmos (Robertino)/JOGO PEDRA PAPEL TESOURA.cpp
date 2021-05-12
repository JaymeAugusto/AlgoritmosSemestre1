#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()
#include<windows.h>

int main(){
	int i, qtd, j, opc, cp, empate=0, jog=0, cpu=0;
	printf("\n\tDigite quantas partidas deseja jogar\n");
	scanf("%d",&qtd);
	printf("\t\t-----MENU-----\n\n");
	printf("\t\t[1] para TESOURA\n");
	printf("\t\t[2] para PEDRA\n");
	printf("\t\t[3] para PAPEL\n");
	srand(time(NULL));
	
	for(i=0; i<qtd; i++){
		printf("------------------------------------------------------\n");
		printf("  %d pt | Digite qual opcao deseja escolher\n",i+1);
		printf("------------------------------------------------------\n\n");
		scanf("%d",&opc);
		if(opc>3 || opc<1){
			printf("\t\t---NUMERO INVALIDO---\n");
			printf("\t\t---JOGO FINALIZADO---\n");
			exit(1);
		}
		else{
			cp = rand() %3;
			cp++;
			printf("%d\n\n",cp);
			if(opc==cp){
				printf("\tEmpate\n");
				empate++;
			}
			else if(opc==1){
				if(cp==2){
					printf("\tComputador Win\n");
					cpu++;
				}
				else{
					printf("\tJogador win\n");
					jog++;
				}
			}
			else if(opc==2){
				if(cp==1){
					printf("\tJogador win\n");
					jog++;
				}
				else{
					printf("\tComputador Win\n");
					cpu++;
				}
			}
			else if(opc==3){
				if(cp==1){
					printf("\tComputador Win\n");
					cpu++;
				}
				else{
					printf("\tJogador win\n");
					jog++;
				}
			}
		}
		
	}
	printf("\n\n\n------------------------------------------------------\n");
	printf("\t  RESULTADO DA PARTIDA\n\n");
	printf("\tTotal de empates = %d\n",empate);
	printf("\tTotal de vitorias do jogador = %d\n",jog);
	printf("\tTotal de vitorias do Computador = %d\n",cpu);
	if(jog==cpu){
		printf("\n\t----- EMPATE -----\n");
	}
	else if(jog>cpu){
		printf("\n\t----- JOGADOR WIN -----\n");
	}
	else{
		printf("\n\t----- COMPUTADOR WIN -----\n");
	}
	printf("------------------------------------------------------\n");
	system("pause");
	return 0;
}
