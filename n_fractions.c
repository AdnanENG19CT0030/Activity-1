#include<stdio.h>
typedef struct fraction
{
  int nr;
  int dr;
}Frac;
int computeGCD(int s, int t)
{
  if(s==0)
    return t;
  else
    return computeGCD(t%s,s);
}
int computeLCM(int d, int ar[])
{
  int lcm = ar[0];
  for(int x=1;x<d;x++)
  {
    lcm = (((ar[x]*lcm))/(computeGCD(ar[x],lcm)));
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
void printFrac(int nof, Frac fracs[], Frac f)
{
  for(int n=0;n<nof;n++)
  {
    if(n==nof-1)
      printf("%d/%d ",fracs[n].nr,fracs[n].dr);
    else
      printf("%d/%d + ",fracs[n].nr,fracs[n].dr);
  }
  printf("is %d/%d\n",f.nr,f.dr);
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
  res.dr = computeLCM(nof,drs);
  for(int j=0;j<nof;j++)
    nrs[j] = res.dr/drs[j];
  for(int k=0;k<nof;k++)
    res.nr = res.nr+nrs[k];
  G = computeGCD(res.nr,res.dr);
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
  printFrac(n,frns,sum);
  return 0;
}
