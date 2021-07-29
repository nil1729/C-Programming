int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char s[200];
    scanf("%s",s);
    for(int i=0;i<m;i++)
    {
        int l,r;
        char c1,c2;
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(int i=l-1;i<=r-1;i++)
        {
            if(s[i]==c1)
                s[i]=c2;
        }
    }
    printf("%s",s);
    return 0;
}
