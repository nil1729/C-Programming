int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    {
        int x=n/3;
        if(x%3!=0)
        {
            printf("%d %d %d",x,x,x);
            return 0;
        }
        else
        {
            printf("%d %d %d",x+2,x-1,x-1);
            return 0;
        }
    }
    else
    {
        int x=n/3;
        if(x%3!=0)
        {
            if((n-2*x)%3==0)
            {
                if((x-1)%3==0)
                {
                    printf("%d %d %d",x+1,x,n-2*x-1);
                    return 0;
                }
                else
                {
                    printf("%d %d %d",x-1,x,n-2*x+1);
                    return 0;
                }
            }
            else
                printf("%d %d %d",x,x,n-2*x);
        }
        else
        {
            printf("%d %d %d",x+1,x-1,n-2*x);
            return 0;
        }
    }
}
