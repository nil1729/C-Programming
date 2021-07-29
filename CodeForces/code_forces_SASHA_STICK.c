int main()
{
    long long int n,k,x;
    scanf("%I64d %I64d",&n,&k);
    x=n/k;
    if(x%2==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
