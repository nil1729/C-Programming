int main()
{
    long long int a,b,c;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    long long int sum=0;
    sum=c*2;
    if(a>b)
    {
        sum=sum+b*2+1;
    }
    if(a<b)
    {
        sum=sum+a*2+1;
    }
    if(a==b)
    {
        sum=sum+a*2;
    }
    printf("%I64d",sum);
    return 0;
}
