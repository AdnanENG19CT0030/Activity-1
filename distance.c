//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
	#include<math.h>
	int x,x2,y,y2;
	void getValues()
	{
		printf("Enter co-ordinates of first point:\n");
		scanf("%d%d",&x,&y);
		printf("Enter co-ordinates of second point:\n");
		scanf("%d%d",&x2,&y2);
	}
	float computeDistance(int a1, int b1, int a2, int b2)
	{
		return sqrt(((a2-a1)*(a2-a1))-((b2-b1)*(b2-b1)));
	}
	void putValue()
	{
		printf("The distance between the given two points is: %f\n",computeDistance(x,y,x2,y2));
	}
	int main()
	{
		getValues();
		putValue();
		return 0;
	}
