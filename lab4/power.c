//1. Write recursive code to calculate a^n.
#include<stdio.h>
int power(int n1,int n2);
int main(){
	int base,pow,res;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter power:");
	scanf("%d",&pow);
	res=power( base,pow);
	printf("result :%d\n",res);
	return 0;
}
int power(int n1,int n2){
	if(n2!=0){
		return n1*power(n1,n2-1);
	}
	else{
		return 1;
	}
}
