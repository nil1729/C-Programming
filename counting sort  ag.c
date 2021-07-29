int main()
{
    int n,max,result[100]={};
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(int j=0;j<=max;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==j)
            {
                result[j]++;
            }
        }
    }
    for(int j=0;j<=max;j++)
    {
        printf("%d ",result[j]);
    }
    return 0;
}
