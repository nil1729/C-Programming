int main()
{
    int n;
    scanf("%d",&n);
    int l[200]={},r[200]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
    }
    int k,x;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(k>=l[i] && k<=r[i])
        {
            x=i;
        }
    }
    printf("%d",n-x);
    return 0;
}
