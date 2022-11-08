#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int n1=num1;
    int n2=num2;
    while(num1!=num2)
    {
       if(num1>num2)
          num1=num1-num2;
       else
          num2=num2-num1;
    }
    int lcm=(n1*n2)/num1;
    printf("%d",lcm);
}