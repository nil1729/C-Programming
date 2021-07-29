int main()
{
    int n;
    scanf("%d",&n);
    int x=n-10;
    if(x<=0)
    {
        printf("0");
        return 0;
    }
    else
    {
        if(x<=9)
        {
            printf("4");
            return 0;
        }
        else
        {
            if(x==10)
            {
                printf("15");
                return 0;
            }
            if(x==11)
            {
                printf("4");
                return 0;
            }
            if(x>=12)
            {
                printf("0");
                return 0;
            }
        }
    }
    return 0;
}
