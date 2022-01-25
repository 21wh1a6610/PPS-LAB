#include<stdio.h>
int main()
{ int sub1,sub2,sub3;
float avg;
scanf("%d %d %d",&sub1,&sub2,&sub3);
avg=(sub1+sub2+sub3);
printf("your average marks percentage :", avg);
if(avg>=90)
{
	printf("distinction");
}
else if (avg>=80 && avg<=89)
{
	printf("your grade is A");
}
else if (avg>=70 && avg<=79)
{
	printf("your grade is B");
}
else if (avg>=60 && avg<=69)
{
	printf("your grade is C");
}
else
{
	printf("you are failed");
}
}