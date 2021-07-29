int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int a,b,k,x,y,ans;
        scanf("%I64d %I64d %I64d",&a,&b,&k);
        x=k/2;
        y=k-x;
        ans=a*y-b*x;
        printf("%I64d\n",ans);
    }
    return 0;
}
