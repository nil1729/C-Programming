int main()
{
    int m,d;
    scanf("%d %d",&m,&d);
    if(m==2)
    {
        if(d==1)
        {
            printf("4");
            return 0;
        }
        else
        {
            printf("5");
            return 0;
        }
    }
    else
    {
        if(m==4 || m==6 || m==9 || m==11)
        {
            if(d<7)
            {
                printf("5");
                return 0;
            }
            else
            {
                printf("6");
                return 0;
            }
        }
        else
        {
            if(d<6)
            {
                printf("5");
                return 0;
            }
            else
            {
                printf("6");
                return 0;
            }
        }
    }
    return 0;
}
