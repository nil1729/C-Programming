#define MAX 20;
int LIN_SEARCH(int arr[],int n,int x)
{
    int count=0,index;
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
    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==x)
        {
          index=i;
          break;
        }
    }
    printf("CALL %d times",count);
    return index;
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
    int p=LIN_SEARCH(arr,n,x);
    printf("\nINDEX AT %d",p);
    return 0;
}
