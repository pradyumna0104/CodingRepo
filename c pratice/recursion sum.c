#include <stdio.h>
 int sum(int n);
int main()
{
 int a;
 printf("enter a number :");
 scanf("%d",&a);
 int s=sum(a);
printf("the sum is %d",s);
return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sto=sum(n-1);
    int sumt=sto+n;
    return sumt;
}
