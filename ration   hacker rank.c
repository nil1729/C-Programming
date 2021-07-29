int main()
{
    int n,sum=0,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum%2==1)
        printf("NO");
    else
    {
        for(int i=0;i<n;i++)
        {
        if(arr[i]%2==1)
        {
            arr[i]+=1;
            arr[i+1]=arr[i+1]+1;
            count+=2;
        }
        }
          printf("%d",count);
    }
    return 0;
}
