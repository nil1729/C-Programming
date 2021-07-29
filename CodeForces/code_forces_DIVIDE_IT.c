int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long int n,count=0;
        scanf("%I64d",&n);
        while(n!=1)
        {
        if(n%2==0 || n%3==0 || n%5==0)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            if(n%3==0)
            {
                n=(2*n)/3;
                count++;
            }
            if(n%5==0)
            {
                n=(n*4)/5;
                count++;
            }

        }
        else
        {
            count=-1;
            break;
        }
        }
        printf("%I64d\n",count);
    }
    return 0;
}
