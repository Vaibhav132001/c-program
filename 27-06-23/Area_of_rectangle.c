//Area of rectangle
#include<stdio.h>
int main()
{
	float length,breadth,area;
	
	printf("Enter the value of base and height:-");
	scanf("%f %f",&length,&breadth);
	
	area= length*breadth;
	printf("Area of rectangle is:-%f",area);
	return 0;
}
