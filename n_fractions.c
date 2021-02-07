//WAP to find the sum of n fractions.
#include<stdio.h>
	int n;
	struct Fraction
	{
		int nr[100],dr[100];	
	}F;
	void takeFractions()
	{
		printf("Enter the number of fractions to be added:\n");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			printf("Enter numerator of fraction %d:\n",i+1);
			scanf("%d",&F.nr[i]);
			printf("Enter denominator of fraction %d:\n",i+1);
			scanf("%d",&F.dr[i]);
		}
	}
	int findGCD(int x, int y)
	{
		if(y==0)
			return x;
		return findGCD(y, x%y);
}
int findLCM(int l[], int v)
{
	int sol = l[0];
	for(int i=1;i<v;i++)
		sol = (((l[i]*sol))/(findGCD(l[i],sol)));
	return sol;
}
void computeSum(int tot, int N[], int D[])
{
	int fnr = 0, fdr = findLCM(D,tot);
	for(int i=0;i<tot;i++)
	{
	fnr = fnr + (N[i])*(fdr/D[i]);
	}
	int G = findGCD(fnr,fdr);
	fnr /= G;
	fdr /=G;
	printf("Sum of %d fractions is:\n",tot);
	printf("%d / %d\n",fnr,fdr);
}
int main()
{
	takeFractions();
	computeSum(n,F.nr,F.dr);
	return 0;
}
