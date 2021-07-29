int main()
{
    int p,n;
    scanf("%d %d",&p,&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int b[n];
    for(int i=0;i<n;i++)
    {
        int x=arr[i]%p;
        b[i]=x;
        for(int j=0;j<i;j++)
            if(b[j]==x)
            {
                printf("%d",i+1);
                return 0;
            }
    }
    printf("-1");
    return 0;
}
