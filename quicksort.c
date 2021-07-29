int main()
{
    int n;
    int a[1000],left[1000],equal[1000],right[1000];
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[0])
            printf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[0])
            printf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[0])
            printf("%d ",a[i]);
    }
    return 0;
}
