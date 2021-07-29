long long int fact(long long n)
{
    long long int x;
    if(n==1)
        return 1;
    else
        x=n*fact(n-1);
    return x;
}
int main()
{
    long long int a,b,ans;
    scanf("%I64d %I64d",&a,&b);
    if(a>=b)
        ans=fact(b);
    else
        ans=fact(a);
    printf("%I64d",ans);
    return 0;
}
