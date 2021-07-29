int main()
{
    int n,a[120000],count[10]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    int t=count[4];
    t+=count[3];
    count[1]-=count[3];
    t+=count[2]/2 + count[2]%2;
    count[1]-=2*(count[2]%2);
    if(count[1]>0)
    {
        t+=count[1]/4 + (count[1]%4 >0);
    }
    printf("%d",t);
    return 0;
}
