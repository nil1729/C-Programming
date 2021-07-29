int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s),flag=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]>='a')
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        if(s[0]>='a')
        {
            s[0]=s[0]+'A'-'a';
        }
        else
        {
            s[0]=s[0]+'a'-'A';
        }
        for(int i=1;i<n;i++)
        {
            s[i]=s[i]+'a'-'A';
        }
        printf("%s",s);
    }
    else
    {
        printf("%s",s);
    }
}
