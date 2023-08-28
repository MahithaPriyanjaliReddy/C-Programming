#include<stdio.h>
int main(){
	int x,y,z,sum,avg;
	printf("input x value: ");
	scanf("%d", &x);
	printf("input y value: ");
	scanf("%d", &y);
	printf("input z value: ");
	scanf("%d", &z);
	sum=x+y+z;
	avg=sum/3;
	if(avg>=85){
	printf("high achiever");
}
	else if(avg>=70 && avg<=85){
	printf("pass");
}
	else if(avg=<70){
	printf("needs an improvement");
}
return 0;
}
