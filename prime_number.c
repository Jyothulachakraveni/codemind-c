#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int count=0;
    for(i=2;i<=sqrt(num);i++)
    {
       if(num%i==0)
        count++;
    }
   if(count==0)
     printf("prime ");
   else
        printf("not a prime");
}