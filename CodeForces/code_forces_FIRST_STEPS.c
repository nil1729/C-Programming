int main()
{
    int n,arr[100200],count[100200]={};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[n]=0;
    for(int i=0;i<n;i++)
    {
        count[i]=1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<=arr[j+1])
            {
                count[i]++;
            }
            else
            {
                break;
            }
        }
    }
    int max=count[0];
    for(int i=1;i<n;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
        }
    }
    printf("%d",max);
    return 0;
}
