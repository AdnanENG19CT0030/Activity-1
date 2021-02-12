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
int computeLCM(int d, Frac ar[])
{
  int arr[d];
  for(int b=0;b<d;b++)
    arr[b] = ar[b].dr;
  int lcm = arr[0];
  for(int x=1;x<d;x++)
  {
    lcm = (((arr[x]*lcm))/(computeGCD(arr[x],lcm)));
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
  int n;
  for(n=0;n<nof-1;n++)
  {
    printf("%d/%d + ",fracs[n].nr,fracs[n].dr);
  }
  printf("%d/%d ",fracs[n].nr,fracs[n].dr);
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
  int G;
  res.nr = 0;
  res.dr = computeLCM(nof,fracs);
  for(int j=0;j<nof;j++)
    res.nr = res.nr+(fracs[j].nr)*(res.dr/fracs[j].dr);
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
