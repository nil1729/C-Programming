int main()
{
    int n,k,t,x;
    scanf("%d %d %d",&n,&k,&t);
    if(t<=(n+k)/2)
    {
        x=t;
    }
    else
    {
        x=abs(n+k-t);
    }
    if(x<=k)
        printf("%d",x);
    else
        printf("%d",k);
    return 0;
}
