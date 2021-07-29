int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int v[10005]={};
    for(int i=0;i<n;i++)
    {
        v[a[i]]--;
    }
    for(int j=0;j<m;j++)
    {
        v[b[j]]++;
    }
    for(int i=0;i<10005;i++)
    {
        if(v[i]>0)
            printf("%d",v[i]);
    }
    return 0;
}
