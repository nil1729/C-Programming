int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
    {
        printf("%d",n);
        return 0;
    }
    if(n<0)
    {
        int last_digit=(n%10);
        int x=n/10;
        int y=(n/100)*10 + last_digit;
        if(x>y)
            printf("%d",x);
        else
            printf("%d",y);
        return 0;
    }
    return 0;
}
