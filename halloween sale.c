#include<stdio.h>
int main()
{
    int p,d,m,s,count=0,b[10000];
    scanf("%d %d %d %d",&p,&d,&m,&s);
    for(int i=0;i<10000;i++)
    {
        if((p-d*i)>m)
        {
            b[i]=p-d*i;
        }
        else
        {
            b[i]=m;
        }
    }
    for(int j=0;j<10000;j++)
    {
        s-=b[j];
        if(s>=0)
        {
            count=count+1;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}
