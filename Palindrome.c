#include <stdio.h>
int main(){
    int r,res=0,d,temp;
    scanf("%d",&r);
    temp=r;
    while (r>0)
    {
        d=r%10;
        res=res*10+d;
        r=r/10;
    }
    if (temp==res)
    printf("True");
    else
    printf("False");
    return 0;
}