int main()
{
    int n;
    scanf("%d",&n);
    int x=n/2+1;
    int k=1;
    for(int i=1;i<=n;i++)
        printf("*");
    for(int i=2;i<=x;i++)
    {
        printf("\n");
        for(int j=1;j<=x+1-i;j++)
            printf("*");
        for(int j=1;j<=k;j++)
            printf(" ");
        for(int j=1;j<=x+1-i;j++)
            printf("*");
        k+=2;
    }
    k-=4;
    for(int i=x-1;i>=2;i--)
    {
        printf("\n");
        for(int j=1;j<=x+1-i;j++)
            printf("*");
        for(int j=1;j<=k;j++)
            printf(" ");
        for(int j=1;j<=x+1-i;j++)
            printf("*");
        k-=2;
    }
    printf("\n");
    for(int i=1;i<=n;i++)
        printf("*");
    return 0;
}
