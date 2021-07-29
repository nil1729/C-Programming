int main()
{
    int n,arr[20][20]={};
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        arr[1][j]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=j;k++)
            {
                arr[i][j]+=arr[i-1][k];
            }
        }
    }
    printf("%d",arr[n][n]);
    return 0;
}
