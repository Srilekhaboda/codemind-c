#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[20],c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=(int)log10(a[i])+1;
        if(d%2==0)
        c++;
    }
    printf("%d",c);
    return 0;
}