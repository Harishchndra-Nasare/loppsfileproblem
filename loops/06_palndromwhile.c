#include<stdio.h>
void main(){
	int num,reversed=0,remainder,original;
	printf("Enter the number\n");
	scanf("%d",&num);
	original=num;
	while(num>0){
		remainder=num%10;
		reversed=reversed*10+remainder;
		num=num/10;
	}
	if(original==reversed){
		printf("palndrome number");
	}else{
		printf("not palndrome number");
	}
}
