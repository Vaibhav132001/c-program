//Swapping two variables..
#include<stdio.h>
int main() 
{
  float first, second, temp;
  printf("Enter first number: ");
  scanf("%f", &first);
  printf("Enter second number: ");
  scanf("%f", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  printf("After swapping, first number is = %f\n", first);
  printf("After swapping, second number is = %f", second);
  return 0;
}

