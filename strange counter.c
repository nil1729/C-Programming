int main()
{
    long long int t,rem;
    rem = 3;
    scanf("%lld",&t);
    while(t>rem)
    {
        t=t-rem;
        rem = rem * 2;
    }
    printf("%lld",rem-t+1);
    return 0;
}
