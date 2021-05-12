#include<stdio.h>
int main(){
	int num,i,fat;
	scanf("%d",&num);
	fat = 1;
	
	for(i = 2;i <= num;i++){
		fat *= i;
	}
	printf("fatorial %d",fat);
	
	
	return 0;
}
