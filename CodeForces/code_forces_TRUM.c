int main()
{
    int n,a[1200]={},c[1200]={},b[1200]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        c[i]=c[i-1]+b[i]-a[i];
    }
    int max=c[1];
    for(int i=1;i<=n;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }
    printf("%d",max);
    return 0;
}
