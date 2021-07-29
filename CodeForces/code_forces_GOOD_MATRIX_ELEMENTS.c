int main()
{
    int n;
    scanf("%d",&n);
    int arr[105][105];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x=(n+1)/2;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(arr[i][i]+arr[i][n+1-i]+arr[x][i]+arr[i][x]);
    }
    sum-=(3*arr[x][x]);
    printf("%d",sum);
    return 0;
}
