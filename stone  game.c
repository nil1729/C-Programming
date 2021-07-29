int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,a,b,s[1000];
        scanf("%d%d%d",&n,&a,&b);
        for(int j=0;j<n;j++)
        {
            if(a<b)
            {
                s[j]=(a*(n-1-j)+(b*j));
                printf("%d ",s[j]);
            }
            if(a>b)
            {
                s[j]=(b*(n-1-j)+(a*j));
                printf("%d ",s[j]);
            }
            if(a==b)
            {
                s[j]=(a*(n-1));
                printf("%d ",s[j]);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
