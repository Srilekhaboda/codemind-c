#include<stdio.h>
int reverse(int n)
{
    int rev=0,d;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    do
    {
        n=n+reverse(n);
    }
    while(n!=reverse(n));
    {
        printf("%d",n);
    }
}