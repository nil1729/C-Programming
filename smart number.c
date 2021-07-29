int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count%2==0)
        printf("NO\n");
    else
        printf("YES\n");
    t--;
    }
    return 0;
}
