#include<stdio.h>
void main(){
	int num,i,rem;
	printf("Enter the number");
	scanf("%d",&num);
	do{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}while(num>0);
}
