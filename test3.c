#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,ci;
printf("enter the value of p,r,t");
scanf("%f, %f, %f",&p,&r,&t);
si=(p*t*r)/100;
ci=p*pow((1+r/100),t);
printf("simple interest  = %f",si);
printf("compound interest  = %f",ci);
}


