//Write a program to add two user input numbers using one function.
#include<stdio.h>
	int add(int x, int y)
	{
		return x+y;
	}
	int main()
	{
		int a,b,res;
		printf("Enter first number:\n");
		scanf("%d",&a);
		printf("Enter second number:\n");
		scanf("%d",&b);
res = add(a,b);
printf("Sum of %d and %d is %d",a,b,res);
return 0;
	}
