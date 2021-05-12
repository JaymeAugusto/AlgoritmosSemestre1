#include<stdio.h>
int fatorial (int n){
	int i, fat=n;
	for(i=1; i<n; i++){
		fat*= i;
	}
	return fat;
}

int main(){
	int n=8, p=2;
	float fat;
	fat=fatorial(n)/(fatorial(p)*fatorial(n-p));
	printf("Combinacao de ");
	printf("%d tomados de %d em %d",n,p,p);
	printf("%f\n",fat);
	
	
	return 0;
}
