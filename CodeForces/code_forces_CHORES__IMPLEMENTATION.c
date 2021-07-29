int main()
{
    int n,k,x;
    scanf("%d %d %d",&n,&k,&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n-k;i++)
        count+=arr[i];
    count+=(k*x);
    printf("%d",count);
    return 0;
}
