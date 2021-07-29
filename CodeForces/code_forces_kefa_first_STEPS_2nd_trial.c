int main()
{
    int n,arr[100200]={},count=1,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
        }
        else
        {
            count++;
        }
    }
    if(count>max)
        max=count;
    printf("%d",max);
    return 0;
}
