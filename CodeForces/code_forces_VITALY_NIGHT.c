int main()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    int arr[200][300];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(j%2==1 && arr[i][j]==1)
                count++;
            if(j%2==0 && arr[i][j]==1 && arr[i][j-1]==0)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
