#include<stdio.h>
int main()
{
    int n,arr[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("0");
            }
            else
            {
                printf("x");
            }
        }
        printf("
");
    }
}