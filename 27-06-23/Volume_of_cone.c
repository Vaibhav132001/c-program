//Volume of cone..
#include<stdio.h>
int main()
{
	float pi=3.14,radius,height,volume;
	
	printf("Enter the radius:-");
	scanf("%f",&radius);
	
	printf("Enter the height:-");
	scanf("%f",&height);
	
	volume = (pi*radius*radius*height)/3;
	printf("volume of cone is:-%f",volume);
	return 0;
	
}
