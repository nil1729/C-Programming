int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int count=a;
    int x=a;
    int sum=0;
    while(x!=0)
    {
        sum=sum+x;
        x=x/b;
    }
    printf("%d",sum);
    return 0;
}
