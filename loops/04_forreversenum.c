#include<stdio.h>
void main(){
	int num,reverse,reminder;
	printf("Enter the number\n");
	scanf("%d",&num);
	for( ;num>0; ){
		reminder=num%10;
		printf("%d",reminder);
		num=num/10;
	}
}
