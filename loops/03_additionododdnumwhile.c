#include<stdio.h>
void main(){
	int i=1,n=20,s=0;
	while(i<=n){
		if(i%2!=0){
			s=s+i;
		}
		i++;
	}
	printf("%d\n",s);
}
