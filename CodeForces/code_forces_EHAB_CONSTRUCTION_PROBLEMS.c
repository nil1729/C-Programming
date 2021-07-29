int main()
{
    int x;
    scanf("%d",&x);
    int i=1;
    while(i<=x)
    {
        int j=1,flag=0;
        while(i*j<=x)
        {
            int a=i*j;
            int b=i;
            if(j<x && a*b >x)
            {
                printf("%d %d",a,b);
                return 0;
            }
            else
                j++;
        }
        i++;
    }
    printf("-1");
    return 0;
}
