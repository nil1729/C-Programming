int main()
{
    int n,c;
    scanf("%d %d",&n,&c);
    int arr[100200];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=1;
    for(int i=1;i<n;i++)
    {
        int x=arr[i]-arr[i-1];
        if(x<=c)
            count++;
        else
            count=1;
        //printf("%d ",count);
    }
    printf("%d",count);
    return 0;
}
