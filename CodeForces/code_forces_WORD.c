int main()
{
    int c_a=0,c_A=0;
    char s[200];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]<='Z')
        {
            c_A++;
        }
        else
        {
            c_a++;
        }
    }
    if(c_a>=c_A)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]<='Z')
            {
                s[i]=s[i]+'a'-'A';
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a')
            {
                s[i]=s[i]+'A'-'a';
            }
        }
    }
    printf("%s",s);
    return 0;
}
