int main()
{
    int n;
    scanf("%d",&n);
    int x=n/5;
    int y=n%5;
    if(y==0)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",x+1);
    }
    return 0;
}
