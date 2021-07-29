int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[20],f[20];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&f[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==f[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
