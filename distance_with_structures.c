//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
	#include<math.h>
	struct Distance
	{
		int x,x2,y,y2;
		float d;
	}d1;
	void getValues()
	{
		printf("Enter coordinates of point 1:\n");
		scanf("%d%d",&d1.x,&d1.y);
		printf("Enter coordinates of point 2:\n");
		scanf("%d%d",&d1.x2,&d1.y2);
	}
	float computeDistance(int a1,int a2,int b1, int b2)
	{
		return sqrt(((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1)));
	}
	void printValue()
	{
		printf("The distance between the given points is: %f\n",computeDistance(d1.x,d1.y,d1.x2,d1.y2));
	}
	int main()
	{
		getValues();
		printValue();
		return 0;
	}
