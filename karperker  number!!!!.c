int karprekar(int a)
{
    int b,c=1,d=0,d1=0,x,y,n;
    n=a;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    b=(a*a);
    while(d)
    {
        c=c*10;
        d--;
    }
    x=b%c;
    y=b/c;
    if((x+y)==a)
        return(1);
    else
        return(0);
}

int main()
{
    int p,q,z,count=0;
    scanf("%d%d",&p,&q);
    for(int i=p;i<=q;i++)
    {
        z=0;
        z=karprekar(i);
        if(z==1)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("%d",count);
    if(count==0)
        printf("INVALID RANGE");
    return 0;
}
