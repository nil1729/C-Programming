int main()
{
    char s[10000],t[10000],xor[10000];
    scanf("%s%s",s,t);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[i])
            xor[i]='0';
        else
            xor[i]='1';
        printf("%c",xor[i]);
    }
    return 0;
}
