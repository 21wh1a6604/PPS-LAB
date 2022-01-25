#include<stdio.h>
void main(){
	int m1,m2,m3,total;
	float avg;
	printf("enter the values of m1,m2,m3");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	avg=total/3;
	{
		printf("distinction");
	}
	if(avg>=90){
printf("M");
}
	 else if(avg>=80&&avg<=89){
		printf("A");
	}
	else if(avg>=70&&avg<=79){
		printf("B");
	}
	else if(avg>=60&&avg<=69){
		printf("c");
	}
	else{
		printf("fail");
	}
}
