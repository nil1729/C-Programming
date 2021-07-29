int main()
{
    int n,k,a[100];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=a[k-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=s)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
