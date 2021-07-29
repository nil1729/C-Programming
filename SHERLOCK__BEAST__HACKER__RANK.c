int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        if(n%3==0)
        {
            for(int i=0;i<n;i++)
                printf("5");
        }
        else
        {
            if(n%5==0)
            {
                int x=n/5;
                int i=1;
                while(i<=x)
                {
                    if((n-i*5)%3==0)
                    {
                        for(int j=0;j<n-i*5;j++)
                            printf("5");
                        for(int j=0;j<i*5;j++)
                            printf("3");
                        break;
                    }
                    else
                        i++;
                }
            }
            else
            {
                int flag=0;
                int x=n/5;
                int i=1;
                while(i<=x)
                {
                    if((n-i*5)%3==0)
                    {
                        for(int j=0;j<n-i*5;j++)
                            printf("5");
                        for(int j=0;j<i*5;j++)
                            printf("3");
                        flag++;
                        break;
                    }
                    else
                        i++;
                }
                if(flag==0)
                    printf("-1");
            }
        }
        printf("\n");
    }
    return 0;
}
