#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b");
        scanf("%d%d",&a,&b);
	printf("the arithmetic operators result is %d%d%d%d",a+b,a-b,a*b,a/b);
        printf("the relation operators result is %d%d%d%d",a>b,a<b,a>=b,a<=b);
        printf("the logical operators result is %d%d%d",a&&b,a||b,!(a==b));
	printf("the increment operators result is %d%d%d%d",a++,++a,b++,++b);
	printf("the decrement operators result is %d%d%d%d",a--,--a,b--,--b);
	printf("the bitwise AND operator result is %d",a&b);
	printf("the bitwise OR operator result is %d",a|b);
	printf("the bitwise NOT operator result is %d",a^b);
	}
		
	
		

		

