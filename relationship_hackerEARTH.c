int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=1;j<=n-i;j++)
        {
            printf("##");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    t--;
    }
    return 0;
}
