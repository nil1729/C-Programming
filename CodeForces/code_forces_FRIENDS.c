int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        if(p+2<=q)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
