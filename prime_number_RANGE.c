#include<stdio.h>
void prime_number(int n)
{
    int flag=0,i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        printf("%d",n);
}
int main()
{

    int l,r,i;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        prime_number(i);
    }
    return 0;
}
