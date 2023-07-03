//volume of cuboid..
#include<stdio.h>
int main()
{
	float length,breadth,height,volume;
	
	printf("Enter the length:-");
	scanf("%f",&length);
	
	printf("Enter the breadth:-");
	scanf("%f",&breadth);
	
	printf("Enter the height:-");
	scanf("%f",&height);
	
	volume=length*breadth*height;
	printf("Volume of cuboid is:-%f",volume);
	return 0;
	
}
