int main()
{
    int x,y,z;
    int a,b,c;
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d %d %d",&a,&b,&c);
    if(x<=a)
    {
        a-=x;
        int d=a+b;
        if(y<=d)
        {
            d-=y;
            int e=d+c;
            if(z<=e)
            {
                printf("YES");
                return 0;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    else
    {
        printf("NO");
        return 0;
    }
}
