int main()
{
    int n;
    scanf("%d",&n);
    int x=n%4;
    if(x==1)
    {
        printf("0 A");
    }
    if(x==3)
    {
        printf("2 A");
    }
    if(x==2)
    {
        printf("1 B");
    }
    if(x==0)
    {
        printf("1 A");
    }
    return 0;
}
