int BIN_SEARCH(int arr[],int n,int x)
{
    for(int round=1;round<=n-1;round++)
    {
        for(int i=0;i<=n-1-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
    int l=0,u=n-1;
    while(u>=l)
    {
        int m=(l+u)/2;
        if(arr[m]==x)
        {
            return m;
        }
        else
        {
            if(x>arr[m])
            {
                l=m+1;
            }
            else
            {
                u=m-1;
            }
        }
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
    int x;
    scanf("%d",&x);
    int p=BIN_SEARCH(arr,n,x);
    printf("INDEX AT %d",p);
    return 0;
}
