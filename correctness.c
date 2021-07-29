int main()
{
    int n,a[10000],max,b[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<max)
            {
                max=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(max==a[i])
            {
                b[j]=a[i];
                a[i]=1501;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}
