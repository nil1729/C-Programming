int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int no_spcl_ride=n/m;
    int spcl_ride=no_spcl_ride*b + (n-no_spcl_ride*m)*a;
    int gen_ride=n*a;
    if(spcl_ride<=gen_ride)
        printf("%d",spcl_ride);
    else
        printf("%d",gen_ride);
    return 0;
}
