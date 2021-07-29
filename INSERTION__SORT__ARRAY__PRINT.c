int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int t=arr[n-1];
    int i=n-2;
    int flag=0;
    while(i>=0)
    {
        if(arr[i]<t)
        {
            flag++;
            arr[i+1]=t;
        }
        else
        {
            arr[i+1]=arr[i];
        }
        for(int j=0;j<n;j++)
            printf("%d ",arr[j]);
        if(t>arr[i])
            break;
        printf("\n");
        i--;
    }
    if(flag==0)
    {
        arr[0]=t;
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}
