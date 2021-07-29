int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long int n,a,b;
        scanf("%I64d %I64d %I64d",&n,&a,&b);
        long long int sum=n*a;
        long long int m=b-2*a;
        if(m>0)
        {
            printf("%I64d\n",sum);
        }
        else
        {
            sum+=(m*(n/2));
            printf("%I64d\n",sum);
        }
    }
    return 0;
}
