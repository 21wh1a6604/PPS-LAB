#include <stdio.h>
int main()
{
int a,b,c,max,max1,min,min1;
printf("enter the values ofa,b,c");
scanf("%d%d%d",&a,&b,&c);
max=a>b?a:b;
max1=max>c?max:c;
printf("max value is%d\n",max1);
min=a<b?a:b;
min1=min<c?min:c;
printf("min value is%d",min);
}
