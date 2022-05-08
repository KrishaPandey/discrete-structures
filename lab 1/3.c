#include<stdio.h>
#include<math.h>
int main(){
	float num ,ceiling_integer ,floor_integer;
	printf("enter a number:");
	scanf("%f",&num);
	ceiling_integer=ceil(num);
	floor_integer= floor(num);
	printf("ceil valueof %f is %.2f\n",num,ceiling_integer);
	printf("floor valueof %f is %.2f\n",num,floor_integer);
	return 0;
}
