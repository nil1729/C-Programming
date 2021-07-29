int main()
{
    int k,n,s,p;
    scanf("%d %d %d %d",&k,&n,&s,&p);
    if(n%s==0)
    {
        int x=n/s;
        int y=x*k;
        if(y%p==0)
        {
            int z=y/p;
            printf("%d",z);
            return 0;
        }
        else
        {
            int z=y/p+1;
            printf("%d",z);
            return 0;
        }
    }
    else
    {
        int x=n/s+1;
        int y=x*k;
        if(y%p==0)
        {
            int z=y/p;
            printf("%d",z);
            return 0;
        }
        else
        {
            int z=y/p+1;
            printf("%d",z);
            return 0;
        }
    }
}
