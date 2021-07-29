int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
int lcm(int a,int b)
{
    int x=(a*b)/gcd(a,b);
    return x;
}
int main()
{
    int n,m,z,i=1,j=1,a[2000],b[2000],count=0;
    scanf("%d %d %d",&n,&m,&z);
    int x=lcm(n,m);
   // printf("%d\n",x);
    while(1)
    {
        int y = x*i;
        if(y<=z)
        {
            count++;
            i++;
        }
        else
            break;
    }
    printf("%d",count);
    return 0;
}
