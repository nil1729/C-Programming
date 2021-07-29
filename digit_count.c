int count(int a)
{
    int num=0;
    int y=a;
    while(a!=0)
    {
        a=a/10;
        num++;
    }
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=count(n);
    printf("%d",x);
    return 0;
}
