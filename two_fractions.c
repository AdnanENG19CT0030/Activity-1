//WAP to find the sum of two fractions.
#include<stdio.h>
	struct Fraction
	{
		int w,x,y,z,nr,dr,G;
	}frac;
	void inputValues()
	{
		printf("Enter the numerator of the first fraction:\n");
		scanf("%d",&frac.w);
		printf("Enter the denominator of the first fraction:\n");
		scanf("%d",&frac.x);
		printf("Enter the numerator of the second fraction:\n");
		scanf("%d",&frac.y);
		printf("Enter the denominator of the second fraction:\n");
		scanf("%d",&frac.z);
	}
	void computeFraction()
	{
		frac.nr = w*z+y*x;
		frac.dr = x*z
		for( int a=1;a<=nr && a<=dr;a++)
		{
			if(nr%a==0 && dr%a==0)
				frac.G = a;
		}
	}
	void printFraction()
	{
		printf("The resulting fraction is %d / %d\n",(frac.nr/frac.G),(frac.dr/frac.G));
	}
	int main()
	{
		inputValues();
		computeFraction();
		printFraction();
		return 0;
	}
