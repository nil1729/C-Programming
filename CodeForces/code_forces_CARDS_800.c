int main()
{
    int n;
    scanf("%d",&n);
    int a[200],b[200];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i+1;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
                int m=b[i];
                b[i]=b[j];
                b[j]=m;
            }
        }
    }
    for(int i=0;i<n/2;i++)
    {
        printf("%d %d\n",b[i],b[n-1-i]);
    }
    return 0;
}
