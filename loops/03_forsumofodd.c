#include<stdio.h>
void main(){
	int i=1,n=20,sum=0;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
}
