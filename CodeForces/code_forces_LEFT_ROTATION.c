#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int arr[100200],t[100200];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(i>d)
        {
            t[i-d]=arr[i];
        }
        if(i<=d)
        {
            t[n-d+i]=arr[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",t[i]);
    }
    return 0;
}
