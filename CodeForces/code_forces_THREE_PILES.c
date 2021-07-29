int main()
{
    int q;
    scanf("%d",&q);
    while(q)
    {
        long long int a,b,c,ans;
        scanf("%I64d %I64d %I64d",&a,&b,&c);
        ans=(a+b+c)/2;
        printf("%I64d\n",ans);
        q--;
    }
    return 0;
}
