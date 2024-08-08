#include<stdio.h>
void main(){
	int num,even=0,odd=0,reminder;
	printf("Enter the number");
	scanf("%d",&num);
	do{
		reminder=num%10;
		if(num%2==0){
			even+=reminder;
		}else{
			odd+=reminder;
		}
		num=num/10;
	}while(num>0);
	printf("even number %d",even);
	printf("odd number %d",odd);
}
