int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        int x=n/2;
        printf("%d\n",x);
        for(int i=0;i<x;i++)
        {
            printf("2 ");
        }
        return 0;
    }
    else
    {
        int x=n/2;
        printf("%d\n",x);
        for(int i=0;i<x-1;i++)
        {
            printf("2 ");
        }
        printf("3");
        return 0;
    }
}
