#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter the values of p,t,r");
	scanf("%f %f %f ,&p,&t,&r");
	si=(p*t*r)/100;
	printf("simple interest amount is %f,si");
	ci=p * pow((1+r/100),t);
	printf("compound interest amount is %f,ci");
	}


  