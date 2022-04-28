#include<stdio.h>
int main()
{
    int n,i,j,x[20],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(x[j]<x[i]&&i!=j)
            count++;
        }
        printf("%d ",count);
    }
    return 0;
}