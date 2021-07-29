int main()
{
    int n,arr[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                printf("%d ",j+1);
            }
        }
    }
    return 0;
}
