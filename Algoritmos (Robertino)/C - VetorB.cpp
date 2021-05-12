#include<stdio.h>
int main(){
	float vetorA[3],vetorB[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("%do. numero \n",(i+1));
		scanf("%f",&vetorA[i]);
	}
	
	for(i=0;i<3;i++){
		vetorB[i]=vetorA[i]*3;
		printf("%.0f\n",vetorB[i]);
	}
	
	
	return 0;
}
