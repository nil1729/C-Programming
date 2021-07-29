int main()
{
    int n,a[1200]={},count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int max=a[1],min=a[1];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[j]>max)
                max=a[j];
            if(a[j]<min)
                min=a[j];
        }
        if(a[i]>max || a[i]<min)
            count++;
    }
    printf("%d",count);
    return 0;
}
