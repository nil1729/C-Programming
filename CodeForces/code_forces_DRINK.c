int main()
{
    int n,arr[200];
    double sum=0,ans;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    ans=sum/n;
    printf("%.12Lf",ans);
    return 0;
}
