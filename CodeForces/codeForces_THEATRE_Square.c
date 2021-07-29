int main()
{
    unsigned long long int n,m,a,L,B;
    scanf("%llu %llu %llu",&n,&m,&a);
    unsigned long long int l=n/a;
    unsigned long long int b=m/a;
    if(l*a==n)
    {
        L=l;
    }
    else
    {
        L=l+1;
    }
    if(b*a==m)
    {
        B=b;
    }
    else
    {
        B=b+1;
    }
    unsigned long long int ans=L*B;
    printf("%llu",ans);
    return 0;
}
