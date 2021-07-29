int digit_sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        int x=n%10;
        n/=10;
        sum+=x;
    }
    return sum;
}
int check(int n)
{
    if(digit_sum(n)%4==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        if(check(n))
        {
            printf("%d",n);
            return 0;
        }
        else
        {
            ++n;
        }
    }
    return 0;
}
