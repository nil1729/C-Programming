int main()
{
    int n,h,m,l[100]={},r[100]={},x[100]={};
    scanf("%d %d %d",&n,&h,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&l[i],&r[i],&x[i]);
    }
    for(int round=1;round<=m;round++)
    {
        for(int i=0;i<m-round;i++)
        {
            if(x[i]>x[i+1])
            {
                int t=x[i];
                x[i]=x[i+1];
                x[i+1]=t;
            }
            int p=l[i];
            l[i]=l[i+1];
            l[i+1]=p;
            int q=r[i];
            r[i]=r[i+1];
            r[i+1]=q;
        }
    }
    for(int i=0;i<m;i++)
    {
        printf("%d %d %d\n",l[i],r[i],x[i]);
    }
    int L[100]={};
    for(int i=0;i<=n;i++)
        L[i]=-1;
    for(int i=0;i<m;i++)
    {
        for(int j=l[i];j<=r[i];j++)
        {
            if(L[j]==-1)
            {
                L[j]=x[i]*x[i];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(L[i]==-1)
        {
            L[i]=h*h;
        }
        printf("%d ",L[i]);
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=L[i];
    }
    printf("%d",sum);
    return 0;
}
