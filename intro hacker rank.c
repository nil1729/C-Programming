#include<stdio.h>
int main()
{
    int v,n,arr[1000];
    scanf("%d%d",&v,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == v)
        {
            printf("%d",i);
        }
    }
    return 0;
}
