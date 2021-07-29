int main()
{
    int n,k,t=0,count=0;
    scanf("%d %d",&n,&k);
    int x=240-k;
    for(int i=1;i<=n;i++)
    {
        t=t+5*i;
        if(t<=x)
            count++;
    }
    printf("%d",count);
    return 0;
}
