#include<stdio.h>
int main()
{
	float first,second,temp;
	printf("Enter first no:-");
	scanf("%f"&first);
	
	printf("Enter second no:-");
	scanf("%f"&second);
	
	temp = first;
	
	first = second;
	// value of temp (initial value of first) is assigned to second
	second = temp;
	
	printf("After swapping , first no is:-%f",first);
	printf("After swapping , second no is:-%f",second);
	return 0;
	
}
