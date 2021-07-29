int main()
{
    long long int n,k,x,y,z;
    scanf("%I64d %I64d",&n,&k);
    if(n%2==1)
    {
        if(k>n/2+1)
        {
            printf("%I64d",2*(k-n/2-1));
            return 0;
        }
        else
        {
            printf("%I64d",2*k-1);
            return 0;
        }
    }
    else
    {
        if(k<=n/2)
        {
            printf("%I64d",2*k-1);
            return 0;
        }
        else
        {
            printf("%I64d",2*(k-n/2));
            return 0;
        }
    }
}
