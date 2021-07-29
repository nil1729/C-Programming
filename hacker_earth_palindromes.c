int main()
{
    char s[110],flag=0;
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
