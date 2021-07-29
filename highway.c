#include<stdio.h>
int main()
{
    int n,t,a[100000],min;
    scanf("%d %d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        min=a[y];
        for(int j=x;j<y;j++)
        {
            if(a[j]<min)
                min=a[j];
        }
        printf("%d",min);
    }
    return 0;
}
