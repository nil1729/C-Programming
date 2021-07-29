int main()
{
    long long int n,ans;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        ans=n/2;
    }
    else
    {
        ans= n/2 -n;
    }
    printf("%I64d",ans);
    return 0;
}
