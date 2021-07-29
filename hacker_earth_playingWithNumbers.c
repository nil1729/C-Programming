int main()
{
    int n,q,arr[1000010]={};
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    while(q)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=arr[i];
        }
        int x=l-r+1;
        printf("%d\n",sum/x);
        q--;
    }
    return 0;
}
