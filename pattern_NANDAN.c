int main()
{
    int n;
    scanf("%d",&n);
    //int x=2*n+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("  ");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
