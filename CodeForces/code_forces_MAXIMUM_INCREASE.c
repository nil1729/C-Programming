int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int cnt=1,k=0,size[n];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            cnt++;
        else
        {
            size[k]=cnt;
            cnt=1;
            k++;
        }
    }
    if(cnt!=0)
    {
        size[k]=cnt;
    }
    else
        k--;
    int max=0;
    for(int i=0;i<=k;i++)
        if(size[i]>max)
            max=size[i];
    printf("%d",max);
    return 0;
}
