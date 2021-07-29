int main()
{
    int n,a[150]={},max,min,MAX,MIN;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=101;
    max=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            MAX=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            MIN=i;
        }
    }
    if(MAX<MIN)
    {
        int count=MAX-1+n-MIN;
        printf("%d",count);
        return 0;
    }
    if(MAX>MIN)
    {
        int count=MAX-1+n-MIN-1;
        printf("%d",count);
        return 0;
    }
    return 0;
}
