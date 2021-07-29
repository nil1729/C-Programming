int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    for(int i=0;i<n;i++)
    {
        int f[3]={a[i],b[i],a[i]^b[i]};
        int ans=f[c[i]%3];
        printf("%d\n",ans);
    }
    return 0;
}
