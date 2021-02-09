#include<stdio.h>
typedef struct fraction
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
int givemeLCM(int c, int val[])
{
  int lcm = val[0];
  for(int x=1;x<c;x++)
  {
    lcm = (((val[x]*lcm))/(givemeGCD(val[x],lcm)));
  }
  return lcm;
}
Frac getFrac()
{
  Frac t;
  printf("Enter the numerator of the fraction:\n");
  scanf("%d",&t.nr);
  printf("Enter the denominator of the fraction:\n");
  scanf("%d",&t.dr);
  return t;
}
void printFrac(Frac f)
{
  printf("The fraction is %d / %d\n",f.nr,f.dr);
}
void getFractions(int *nod, Frac nods[])
{
  printf("Enter the number of fractions:\n");
  scanf("%d",nod);
  for(int c=0;c<*nod;c++)
    nods[c] = getFrac();
}
Frac computeSum(int nof, Frac fracs[])
{
  Frac res;
  int nrs[nof], drs[nof], G;
  res.nr = 0;
  for(int i=0;i<nof;i++)
    drs[i] = fracs[i].dr;
  res.dr = givemeLCM(nof,drs);
  for(int j=0;j<nof;j++)
    nrs[j] = res.dr/drs[j];
  for(int k=0;k<nof;k++)
    res.nr = res.nr+nrs[k];
  G = givemeGCD(res.nr,res.dr);
  res.nr /= G;
  res.dr /= G;
  return res;
}
int main()
{
  int n;
  Frac frns[100], sum;
  getFractions(&n,frns);
  sum = computeSum(n,frns);
  printFrac(sum);
  return 0;
}
