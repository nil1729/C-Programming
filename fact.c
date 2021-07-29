long long int fact(int a)
{
    long long int c;
    if(a==1)
    {
        return 1;
    }
    else
    {
        c=fact(a-1)*a;
    }
    return c;

}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a = fact(n);
    printf("%lld",a);
    return 0;
}
