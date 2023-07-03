#include <stdio.h>

int main()
{
    int rem1,rem2,rem3,rev,num;
    scanf("%d",&num);
    
    rem1 = num%10;
    num = num/10;
    
    rem2 = num%10;
    num = num/10;
    
    rem3 = num%10;
    num = num/10;
    
    rev = rem1*1000+ rem2*100 + rem3*10 + num;//logic part
    
    printf("Reverse is :-%d",rev);
    
    return 0;
}
