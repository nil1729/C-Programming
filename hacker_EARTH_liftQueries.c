int main()
{
    int t,a=0,b=7;
    scanf("%d",&t);
    while(t)
    {
        int n;
        scanf("%d",&n);
        int da=abs(n-a);
        int db=abs(n-b);
        if(da==db)
        {
            if(a<n)
            {
                printf("A\n");
                a=n;
            }
            else
            {
                printf("B\n");
                b=n;
            }
        }
        else
        {
            if(da<db)
            {
                printf("A\n");
                a=n;
            }
            else
            {
                printf("B\n");
                b=n;
            }
        }
        t--;
    }
    return 0;
}
