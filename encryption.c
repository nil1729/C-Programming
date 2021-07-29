int main()
{
    char s[1000000]={};
    int c;
    scanf("%s",s);
    int l = strlen(s);
    int r = sqrt(l);
    if(r*r == l)
    {
        c = r;
    }
    else
    {
        c = r + 1;
    }
    if(c*r < l)
    {
        for(int i=0;i<c;i++)
        {
            for(int j=i;j<l;j+=c)
            {
                printf("%c",s[j]);
            }
            printf(" ");
        }
    }
    else
    {
        for(int i=0;i<c;i++)
    {
        for(int j=i;j<l;j+=c)
        {
            printf("%c",s[j]);
        }
        printf(" ");
    }
    }

    return 0;
}
