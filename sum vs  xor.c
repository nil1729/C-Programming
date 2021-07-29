int main()
{
    unsigned long long int n,c,count=0;
    scanf("%lld",&n);
    while(n)
    {
        int x=n%2;
        if(x==0)
            count++;
        n/=2;
    }
    c=pow(2,count);
    printf("%lld",c);
    return 0;
}
