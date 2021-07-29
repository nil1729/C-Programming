int is_prime(int n)
{
    int limit=sqrt(n);
    if(n>2)
    {
        if(n%2==0)
            return 0;
        else
        {
            for(int i=3;i<=limit;i++)//don't use n/2
            {
                if(n%i==0)
                    return 0;
            }
            return 1;
        }
    }
    else
    {
        if(n==2)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int n,i=4;
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("%d %d",n/2,n/2);
        return 0;
    }
    else
    {
        while(i)
        {
           int x=n-i;
           if(is_prime(x))
           {
               i=i+2;
           }
           else
           {
               printf("%d %d",i,x);
               return 0;
           }
        }
    }
    return 0;
}
