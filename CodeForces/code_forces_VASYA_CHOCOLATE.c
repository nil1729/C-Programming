int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int s,a,b,c;
        scanf("%I64d %I64d %I64d %I64d",&s,&a,&b,&c);
        long long int x=s/c;
        long long int y=x/a;
        long long int z=y*b;
        printf("%I64d\n",x+z);
    }
    return 0;
}
