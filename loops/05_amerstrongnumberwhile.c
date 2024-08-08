#include<stdio.h>
void main(){
    int num,reminder,reverse=0,original;
    printf("Enter the number\n");
    scanf("%d",&num);
    original=num;
    while(num>0){
    	reminder=num%10;
    	reverse+=reminder*reminder*reminder;
    	num=num/10;
	}
	if(original==reverse){
		printf("Armstrong number");
	}else{
		printf("Not armstrong number");
	}
}
