void BUBBLE_SORT(int arr[],int n)
{
    for(int round=1;round<=n-1;round++)
    {
        int flag=0;
        for(int i=0;i<=n-1-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag++;
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    BUBBLE_SORT(arr,n);
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
