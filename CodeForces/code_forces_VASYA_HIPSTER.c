int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        int x=a-b;
        int y=x/2;
        printf("%d %d",b,y);
        return 0;
    }
    else
    {
        int x=b-a;
        int y=x/2;
        printf("%d %d",a,y);
        return 0;
    }
    return 0;
}
