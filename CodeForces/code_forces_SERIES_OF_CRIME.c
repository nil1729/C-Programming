int main()
{
    int n,m,l[5]={},b[5]={},k=1;
    scanf("%d %d",&n,&m);
    char s[200][200];
    for(int i=0;i<n;i++)
        scanf(" %s",s[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='*')
            {
                l[k]=i+1;
                b[k]=j+1;
                k++;
            }
        }
    }
    if(b[1]==b[2])
    {
        if(l[3]==l[1])
        {
            printf("%d %d",l[2],b[3]);
            return 0;
        }
        else
        {
            printf("%d %d",l[1],b[3]);
            return 0;
        }
    }
    if(b[1]==b[3])
    {
        if(l[2]==l[1])
        {
            printf("%d %d",l[3],b[2]);
            return 0;
        }
        else
        {
            printf("%d %d",l[1],b[2]);
            return 0;
        }
    }
    if(b[2]==b[3])
    {
        if(l[1]==l[2])
        {
            printf("%d %d",l[3],b[1]);
            return 0;
        }
        else
        {
            printf("%d %d",l[2],b[1]);
            return 0;
        }
    }
    return 0;
}
