int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int m,n,a[10000],x=0,y=0;
        scanf("%d%d",&m,&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    x=i+1;y=j+1;
                    break;
                }
            }
            if(x!=0 && y!=0)
                break;
        }
        printf("%d %d\n",x,y);
        t--;
    }
    return 0;
}
