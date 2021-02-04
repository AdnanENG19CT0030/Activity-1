//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
	int x,y;
	void getNumbers()
	{
		printf("Enter number 1:\n");
		scanf("%d",&x);
		printf("Enter number 2:\n");
		scanf("%d",&x);
	}
	int getSum(int a,int b)
	{
		return a+b;
	}
	void printSum()
	{
		int s = getSum(x,y);
		printf("The sum is %d\n",s);
	}
	int main()
	{
		getNumbers();
		printSum(x,y);
		return 0;
	}
