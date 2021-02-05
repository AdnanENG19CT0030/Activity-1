//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
	float h,d,b;
	void getValues()
	{
		printf("Enter height:\n");
		scanf("%f",&h);
		printf("Enter depth:\n");
		scanf("%f",&d);
		printf("Enter breadth:\n");
		scanf("%f",&b);
	}
	float computeVolume(float a, float b, float c)
	{
		float vol;
		vol = 0.33*((a*b*c)+(b/c));
		return vol;
	}
	void putVolume()
	{
		printf("The volume of the Tromboloid is: %f",computeVolume(h,d,b));
	}
	int main()
	{
		getValues();
		putVolume();
		return 0;
	}
