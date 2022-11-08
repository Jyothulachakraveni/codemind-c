#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int num2=num;
    int sum=0;
    int fact=1;
   while(num!=0)
   {   fact=1;
       int rem=num%10;
       num=num/10;
       for(i=1;i<=rem;i++)
        fact=fact*i;
       sum=sum+fact;
   }
   if(sum==num2)
    printf("The number %d is a strong number",sum);
   else
    printf("The number %d is not a strong number",num2);
}