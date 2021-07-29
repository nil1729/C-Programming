long long int min(long long int a,long long int b)
{
    //printf("%I64d\t%I64d\n",a,b);
    if(a>b)
        return b;
    else
        return a;
}
long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    long long int n,x,y,t1=0,t2=0;
    scanf("%I64d",&n);
    scanf("%I64d %I64d",&x,&y);
    if(x!=1 && y!=1)
    {
        t1+=(min(x,y)-1);
        //printf("%I64d\n",min(x,y));
        //printf("%I64d\n",t1);
        t1+=abs(x-y);
    }
    else
    {
        if(x==1)
            t1+=(x-1);
        else
            t1+=(y-1);
    }
    if(x!=n && y!=n)
    {
        t2+=(n-max(x,y));
        t2+=abs(x-y);
    }
    else
    {
        if(x==1)
            t2+=n-x;
        else
            t2+=n-y;
    }
    //printf("%I64d\t%I64d\n",t1,t2);
    if(t1<=t2)
    {
        printf("White\n");
        return 0;
    }
    else
    {
        printf("Black\n");
        return 0;
    }
    return 0;
}
