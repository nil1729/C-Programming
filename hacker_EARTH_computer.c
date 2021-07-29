long long int binary(long long int a)
{
    long long int num=0,rem,i=1,x,y;
    x=a;
    while(x!=0)
    {
        rem=x%2;
        x=x/2;
        num=num+rem*i;
        i=i*10;
    }
    y=count(num);
    return y;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int d,ans=0,x;
        scanf("%lld",&d);
        x=1;
        while(x<=d)
        {
           long long int t1,t2,c1,c2;
           t1=d/x;
           t2=x;
           c1=binary(t1);
           c2=binary(x);
           if(c1<=c2)
           {
               ans++;
           }
           x++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
