int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        int p=86400-arr[i];
        t=t-p;
        if(t<=0)
            break;
    }
    printf("%d",count);
    return 0;
}
