//WAP to find the sum of two fractions.
#include<stdio.h>
int nr,dr,G;
struct Fraction
{
  int num,den;
}frac[2];
void inputValues()
{
  printf("Enter the numerator of the first fraction:\n");
  scanf("%d",&frac[0].num);
  printf("Enter the denominator of the first fraction:\n");
  scanf("%d",&frac[0].den);
  printf("Enter the numerator of the second fraction:\n");
  scanf("%d",&frac[1].num);
  printf("Enter the denominator of the second fraction:\n");
  scanf("%d",&frac[1].den);
}
void computeFraction()
{
  nr = frac[0].num*frac[1].den+frac[1].num*frac[0].den;
  dr = frac[0].den*frac[1].den;
  for(int a=1;a<=nr && a<=dr;a++)
  {
    if(nr%a==0 && dr%a==0)
      G = a;
  }
}
void printFraction()
{
  printf("The resultant fraction is %d / %d\n",(nr/G),(dr/G));
}
int main()
{
  inputValues();
  computeFraction();
  printFraction();
  return 0;
}
