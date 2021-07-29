#include<stdio.h>
int main()
{
    int t,c1,k,krem,count,w;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,c,m;
        scanf("%d %d %d",&n,&c,&m);
        c1=n/c;
        //k=c1/m;
        //krem=c1%m;
        count=c1;
        w=c1;
        while(w>=m)
        {
            count++;
            w-=m;
            w++;
        }
        printf("%d",count);
    }
    return 0;
}
