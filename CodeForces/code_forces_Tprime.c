int is_prime(long long int n)
{
    long long limit=sqrt(n);
    if(n>2)
    {
        if(n%2==0)
            return 0;
        else
        {
            for(int i=3;i<=limit;i++)//don't use n/2
            {
                if(n%i==0)
                    return 0;
            }
            return 1;
        }
    }
    else
    {
        if(n==2)
            return 1;
        else
            return 0;
    }
}
int main()
{
    long long int n,num;
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%I64d",&num);
        long long int x=sqrt(num);
        if(x*x==num && is_prime(x))
            printf("YES\n");
        else
            printf("NO\n");
    }
    /*for(int i=1;i<=n;i++)
    {
        if(is_T_prime(a[i]))
            printf("YES\n");
        else
            printf("NO\n");
    }*/
    return 0;
}
