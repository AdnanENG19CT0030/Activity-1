//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
	float tromboloid(float height, float depth, float breadth)
	{
		return 0.33*((height*depth*breadth)+(depth/breadth));
	}
	int main()
	{
		float h,d,b;
		printf("Enter dimensions of the tromboloid(h,d,b):\n");
		scanf("%f%f%f",&h,&d,&b);
		printf("Volume of the tromboloid is %f",tromboloid(h,d,b));
		return 0;
	}
