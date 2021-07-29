#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,sm,min,max;
    scanf("%d %d",&n,&m);
    int d[m],s[n],D[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&s[i]);
    }

    if(m!=n)
    {
        sm=s[0];
    for(int i=1;i<m;i++)
    {
        if(s[i]>sm)
            sm=s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            d[j]=abs(i-s[j]);
        }
        min=d[0];
        for(int j=1;j<m;j++)
        {
            if(d[j]<min)
                min=d[j];
        }
        D[i]=min;
    }
    max=D[0];
    for(int i=1;i<n;i++)
    {
        if(D[i]>max)
            max=D[i];
    }
    printf("%d",max);
    }
    else
        printf("0");

    return 0;
}
