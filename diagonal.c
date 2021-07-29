int main()
{
    int n,a[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i][i];
        sum2=sum2+a[i][n-1-i];
    }
    int sum=abs(sum1-sum2);
    printf("%d",sum);
    return 0;
}
