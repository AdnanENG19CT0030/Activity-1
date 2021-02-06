//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
	struct Data
	{	
		int n;
		int num[100];
	}N;
	void takeInput()
	{
		printf("Enter value of n:\n");
		scanf("%d",&N.n);
		printf("Enter %d numbers:\n",N.n);
		for(int k=0;k<N.n;k++)
			scanf("%d",&N.num[k]);
	}
	int computeSum()
	{
		int s=0;
		for(int h=0;h<N.n;h++)
			s += N.num[h];
		return s;
	}
	int main()
	{
		takeInput();
		printf("The sum of %d numbers is %d\n",N.n,computeSum());
		return 0;
	}
