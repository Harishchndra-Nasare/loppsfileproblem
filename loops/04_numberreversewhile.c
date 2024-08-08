#include<stdio.h>
void main(){
	int n,i,n1;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(n>0){
		n1=n%10;
		printf("%d",n1);
		n=n/10;
		//printf("%d\n",n);
		i++;
	}
}
