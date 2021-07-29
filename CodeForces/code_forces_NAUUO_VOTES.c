int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y)
    {
        if(z==0)
            printf("0");
        else
            printf("?");
    }
    else
    {
        if(x>y)
        {
            int p=x-y;
            if(p>z)
                printf("+");
            else
                printf("?");
        }
        else
        {
            int p=y-x;
            if(p>z)
                printf("-");
            else
                printf("?");
        }
    }
    return 0;
}
