#include<stdio.h>
void main(){
	int num,reminder,even=0,odd=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for( ;num>0; ){
		reminder=num%10;
		if(num%2==0){
			even+=reminder;
		}else{
			odd+=reminder;
		}
		num=num/10;
	}
	printf("Even values are %d\n",even);
	printf("Odd values are %d",odd);
}
