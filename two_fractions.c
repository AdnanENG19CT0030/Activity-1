//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct Fraction
{
  int nr;
  int dr;
}Frac;
int givemeGCD(int x, int y)
{
  if(x==0)
    return y;
  else  
    return givemeGCD(y%x,x);
}
Frac getFrac()
{
  Frac t;
  printf("Enter numerator of the fraction:\n");
  scanf("%d",&t.nr);
  printf("Enter denominator of the fraction:\n");
  scanf("%d",&t.dr);
  return t;
}
Frac computeSum(Frac f1, Frac f2)
{
  Frac sum;
  int G;
  sum.nr = (f1.nr*f2.dr)+(f2.nr*f1.dr);
  sum.dr = f1.dr*f2.dr;
  G = givemeGCD(sum.nr,sum.dr);
  sum.nr = sum.nr/G;
  sum.dr = sum.dr/G;
  return sum;
}
void printFrac(Frac f)
{
  printf("The fraction is %d / %d\n",f.nr,f.dr);
}
int main()
{
  Frac fr1,fr2,res;
  fr1 = getFrac();
  fr2 = getFrac();
  res = computeSum(fr1,fr2);
  printFrac(res);
  return 0;
}

