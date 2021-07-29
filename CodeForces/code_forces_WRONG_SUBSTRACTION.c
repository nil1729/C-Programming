int main()
{
    long long int a,b;
    scanf("%I64d %I64d",&a,&b);
    while(b)
    {
        if(a>1)
        {
        if(a%10==0)
        {
            a=a/10;
            b--;
        }
        else
        {
            a--;
            b--;
        }
        }
        else
            break;
    }
    printf("%I64d",a);
    return 0;
}
