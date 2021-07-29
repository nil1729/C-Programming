int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int d,t,flag=0;
    d=arr[0];
    if(arr[0]>15)
    {
        t=15;
    }
    else
    {
        t=arr[0]+15;
    }
    if(n==1)
    {
        printf("%d",t);
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(d>15)
        {
            flag++;
            printf("%d",t);
            return 0;
        }
        else
        {
            d=arr[i]-arr[i-1];
            t=arr[i-1]+15;
            //printf("%d\t",t);
        }
    }
    if(flag==0)
    {
        if(d>15)
        {
            flag++;
            printf("%d",t);
            return 0;
        }
        else
        {
            t=arr[n-1]+15;
            if(t<=90)
            {
                printf("%d",t);
                return 0;
            }
            else
                printf("90");
        }
    }
    return 0;
}
