#include<stdio.h>
int digit_count(int n)
{
    int m=n,count=0;
    while(m!=0)
    {
        m=m/10;
        count++;
    }
    return count;
}
int is_AMSTRONG(int n)
{
    int y=digit_count(n);
    int m=n,p=0,sum=0;
    while(m!=0)
    {
        p=m%10;
        sum=sum+pow(p,y);
        m=m/10;
    }
    if(sum==n)
        return n;
    else
        return m;
}
int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        if(is_AMSTRONG(i))
            printf("%d ",i);
    }
    return 0;
}
