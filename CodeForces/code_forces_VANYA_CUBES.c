int sum(int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res=res+i;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=n,i=1;
    while(x>=sum(i))
    {
        x=x-sum(i);
        i++;
    }
    printf("%d",i-1);
    return 0;
}
