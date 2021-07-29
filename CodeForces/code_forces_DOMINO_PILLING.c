int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==1 && n==1)
    {
        printf("0");
    }
    if(m==1 && n>1)
    {
        printf("%d",n/2);
    }
    if(m>1 && n==1)
    {
        printf("%d",m/2);
    }
    if(m>1 && n>1)
    {
        if(m>=n)
        {
            int x=n/2;
            int y=m/2;
            int z=n%2;
            int count=m*x + y*z;
            printf("%d",count);
        }
        else
        {
            int x=m/2;
            int y=n/2;
            int z=m%2;
            int count=n*x + y*z;
            printf("%d",count);
        }
    }
    return 0;
}
