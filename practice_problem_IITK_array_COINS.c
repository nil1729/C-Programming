int MAX_CALC(int arr[][100],int n)
{
    int coin[100][100];
    coin[0][0]=arr[0][0];
    for(int i=1;i<n;i++)
        coin[0][i]=coin[0][i-1]+arr[0][i];
    for(int i=1;i<n;i++)
        coin[i][0]=coin[i-1][0]+arr[i][0];
    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            coin[i][j]=max(coin[i][j-1],coin[i-1][j])+arr[i][j];
    return coin[n-1][n-1];
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    int m=MAX_CALC(arr,n);
    printf("%d",m);
    return 0;
}
