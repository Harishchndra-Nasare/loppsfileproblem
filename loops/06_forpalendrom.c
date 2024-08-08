#include<stdio.h>
void main(){
	int num,reminder,reverse=0,original;
	printf("Enter the number\n");
	scanf("%d",&num);
	original=num;
	for( ;num>0; ){
		reminder=num%10;
		reverse=reverse*10+reminder;
		num=num/10;
	}
	if(original==reverse){
		printf("palendrom number");
	}else{
		printf("Not palendrom number");
	}
}
