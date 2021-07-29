#include<stdio.h>
int main()
{
    int n,c,T=0,limak=0,radewoosh=0;
    scanf("%d %d",&n,&c);
    int p[100]={},t[100]={};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t[i]);
    }
    for(int i=1;i<=n;i++)
    {
        T+=t[i];
        int x=p[i]-c*T;
        if(x<0)
            x=0;
        limak+=x;
    }
    T=0;
    for(int i=n;i>=1;i--)
    {
        T+=t[i];
        int x=p[i]-c*T;
        if(x<0)
            x=0;
        radewoosh+=x;
    }
    if(limak>radewoosh)
        printf("Limak");
    if(limak<radewoosh)
        printf("Radewoosh");
    if(limak==radewoosh)
        printf("Tie");
    return 0;
}
