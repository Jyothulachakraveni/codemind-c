#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int count=0;
    double sqr=sqrt(num);

   if(sqr-floor(sqr)==0)
     printf("True");
   else
        printf("False");
}