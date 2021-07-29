#include<stdio.h>
int main()
{
    int n,d,a[10000],count=0,t1,t2,x,y;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        x=0;
        y=0;
        t1=a[i]+d;
        t2=a[i]+(2*d);
        for(int j=i+1;j<n-1;j++)
        {
            if(a[j]==t1)
                x=j;
        }
        for(int k=i+2;k<n;k++)
        {
            if(a[k]==t2)
                y=k;
        }
        if(x!=0 && y!=0)
        {
            if(x<y)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
