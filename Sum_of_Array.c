#include<stdio.h>
int sum(int *arr,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=sum(arr,n);
    printf("%d",k);
}