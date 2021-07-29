int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n/2;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        for(int j=1;j<=n-2*i;j++)
            printf("D");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(int i=1;i<=n;i++)
        printf("D");
    printf("\n");
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        for(int j=1;j<=n-2*i;j++)
            printf("D");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

