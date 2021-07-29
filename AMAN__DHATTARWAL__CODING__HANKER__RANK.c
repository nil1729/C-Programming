int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int cnt=1;
    brr[0]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            brr[i]=++cnt;
        }
        else
        {
            cnt=1;
            brr[i]=cnt;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        {
            brr[i]=brr[i+1]+1;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",brr[i]);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=brr[i];
    printf("%d",sum);
    return 0;
}
