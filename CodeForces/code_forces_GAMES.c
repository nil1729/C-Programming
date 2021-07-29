int main()
{
    int n,h[100]={},g[100]={},count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&h[i],&g[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(h[i]==g[j])
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
