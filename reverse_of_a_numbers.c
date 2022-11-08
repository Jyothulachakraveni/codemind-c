#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int num2=0;
    while(num!=0)
    {
        int rem=num%10;
        num/=10;
        num2=num2*10+rem;
    }
    printf("%d",num2);
}