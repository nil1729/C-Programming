int main()
{
    long long int n,x,count=0;
    scanf("%I64d %I64d",&n,&x);
    long long int p[1020];
    char c[1020];
    for(int i=1;i<=n;i++)
    {
        scanf(" %c %I64d",&c[i],&p[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i]=='+')
        {
            x+=p[i];
        }
        if(c[i]=='-')
        {
            if(x>=p[i])
                x-=p[i];
            else
                count++;
        }
        //printf("%d ",x);
    }
    printf("%I64d %I64d",x,count);
    return 0;
}
