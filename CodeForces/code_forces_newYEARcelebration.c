int main()
{
    int arr[5]={};
    scanf("%d %d %d",&arr[1],&arr[2],&arr[3]);
    for(int i=1;i<=2;i++)
    {
        for(int j=i+1;j<=3;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    int ans=arr[3]-arr[1];
    printf("%d",ans);
    return 0;
}
