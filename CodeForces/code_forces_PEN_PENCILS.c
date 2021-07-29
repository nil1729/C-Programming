int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,k;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        int x=a/c;
        int y=b/d;
        if(x*c!=a)
        {
            x=x+1;
        }
        if(y*d!=b)
        {
            y=y+1;
        }
        if(x+y<=k)
        {
            printf("%d %d\n",x,y);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
