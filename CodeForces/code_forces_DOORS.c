int main()
{
    int n,c_1=0,c_0=0,count=0;
    scanf("%d",&n);
    int arr[300000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
            c_1++;
        if(arr[i]==0)
            c_0++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c_0--;
            count++;
            if(c_0==0)
                break;
        }
        if(arr[i]==1)
        {
            c_1--;
            count++;
            if(c_1==0)
                break;
        }
    }
    printf("%d",count);
    return 0;
}
