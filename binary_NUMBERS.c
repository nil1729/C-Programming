int main()
{

    int n,rem,num=0,i=1;
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        n=n/2;
        num=num+rem*i;
        i*=10;
    }
    printf("%d",num);
    return 0;
}
