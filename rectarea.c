#include<stdio.h>
#include<math.h>
typedef struct rectangle
{
  float coords[6];// x1 y1 x2 y2 x3 y3
  float len;
  float brt;
  float area;
}Rect;
int get_Input(int n,Rect r[])
{
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<6;j++)
    {
      scanf("%f",&r[i].coords[j]);
    }
  }
  return n;
}
float compute_area(Rect rs)
{
  rs.len = sqrt(pow(rs.coords[2]-rs.coords[0],2)+pow(rs.coords[3]-rs.coords[1],2));
  rs.brt = sqrt(pow(rs.coords[5]-rs.coords[3],2)+pow(rs.coords[4]-rs.coords[2],2));
  rs.area = rs.len*rs.brt;
  return rs.area;
}
void print_Output(Rect R)
{
  printf("Area of rectangle with vertices (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f) is %.2f\n",R.coords[0],R.coords[1],R.coords[2],R.coords[3],R.coords[4],R.coords[5],R.area);
}
int main()
{
  int n,i;
  Rect RR[100];
  n = get_Input(n,RR);
  for(i=0;i<n;i++)
  {
    RR[i].area = compute_area(RR[i]);
    print_Output(RR[i]);
  }
  return 0;
}
