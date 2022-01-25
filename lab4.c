#include <stdio.h>
#include<math.h>
void main(){
int a,b,c,d;
char x,qe,root1,root2;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
qe=a*x*x+b*x+c;
d=b*b-4*a*c;
if(d>0){
	printf("roots are real and distinct");
}
else if(d==0){
	printf("roots are real and equal");
}
else(d<0);
{
	printf("roots are imaginary");
}
root1=(-b+sqrt(d))/2*a;
root2=(-b-sqrt(d))/2*a;
printf("\n roots are%d%d",root1,root2);
}
