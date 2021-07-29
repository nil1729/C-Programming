typedef long long int ll;
int main()
{
    ll n,x,y,d_x,d_y;
    scanf("%I64d",&n);
    if(n%10!=0)
    {
    x=n/10;
    x*=10;
    y=x+10;
    d_x=abs(n-x);
    d_y=abs(n-y);
    if(d_x<=d_y)
        printf("%I64d",x);
    else
        printf("%I64d",y);
    return 0;
    }
    else
        printf("%I64d",n);
    return 0;
}
