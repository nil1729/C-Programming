int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long int x,y;
        scanf("%I64d %I64d",&x,&y);
        long long int n=x-y;
        if(n>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
