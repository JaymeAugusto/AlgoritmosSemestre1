#include<stdio.h>
int main(){
	float notas[6], media = 0;
	int i;
	
	for(i=0;i<6;i++){
		printf("%da. nota: ",(i+1));
		scanf("%f",&notas[i]);
	}
	
	for(i=0;i<6;i++){
		media += notas[1];
	}
	
	media /= 6.0;
	printf("Media: %.2f\n",media);
	
	return 0;
}
