int main()
{
    int n,s;
    scanf("%d %d",&n,&s);
    if(s<n)
    {
        printf("1");
        return 0;
    }
    else
    {
        int x=s/n;
        if(s%n==0)
            printf("%d",x);
        else
            printf("%d",x+1);
        return 0;
    }
}
