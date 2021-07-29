int main()
{
    unsigned long long int n,k,w;
    scanf("%llu %llu %llu",&k,&n,&w);
    unsigned long long int x=(w*(w+1))/2;
    unsigned long long int y=x*k;
    if(y>n)
    {
        printf("%llu",y-n);
    }
    else
    {
        printf("0");
    }
    return 0;
}
