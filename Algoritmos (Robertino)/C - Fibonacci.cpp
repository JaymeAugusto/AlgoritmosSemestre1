#include<stdio.h>
int main(){
	int fib,n,num1,num2,i;
	scanf("%d",&n);
	num1= 0;
	num2= 1;
	i = 3;
	printf("Termo 1: %d\n",num1);
	printf("Termo 2: %d\n",num2);
	while(i<=n){
		fib = num1+num2;
		num1 = num2;
		num2 = fib;
		printf("Termo %d: %d\n",i,fib);
		i++;
	}
	
	
	return 0;
}
