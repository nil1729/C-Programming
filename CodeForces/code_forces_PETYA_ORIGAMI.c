int main()
{
    int n,k,r_n,g_n,b_n;
    scanf("%d %d",&n,&k);
    int red=2*n;
    int green=5*n;
    int blue=8*n;
    int r=red/k;
    int g=green/k;
    int b=blue/k;
    if(k*r==red)
    {
        r_n=r;
    }
    else
    {
        r_n=r+1;
    }
    if(k*g==green)
    {
        g_n=g;
    }
    else
    {
        g_n=g+1;
    }
    if(k*b==blue)
    {
        b_n=b;
    }
    else
    {
        b_n=b+1;
    }
    int count = r_n+b_n+g_n;
    printf("%d",count);
    return 0;
}
