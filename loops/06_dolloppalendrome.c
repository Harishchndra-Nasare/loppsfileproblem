#include<stdio.h>
void main(){
	int num,reminder,reverse=0,original;
	printf("Enter the number\n");
	scanf("%d",&num);
	original=num;
	do{
		reminder=num%10;
		reverse=reverse*10+reminder;
		num=num/10;
	}while(num>0);
	if(original==reverse){
		printf("Palendrome number");
	}else{
		printf("Not palendrome number");
	}
	
}
