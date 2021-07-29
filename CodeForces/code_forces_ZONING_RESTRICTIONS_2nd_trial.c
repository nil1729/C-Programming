int main()
{
    int n,h,m,l,r,x;
    scanf("%d %d %d",&n,&h,&m);
    int spot[100]={};
    for(int i=1;i<=n;i++)
        spot[i]=h;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&l,&r,&x);
        for(int j=l;j<=r;j++)
        {
            if(spot[j]>x)
                spot[j]=x;
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=(spot[i]*spot[i]);
    printf("%d",sum);
    return 0;
}
