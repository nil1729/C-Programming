int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            if(n==2)
                printf("2\n");
            else
                printf("0\n");
        }
        else
            printf("1\n");
    }
    return 0;
}
