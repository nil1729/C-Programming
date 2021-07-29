int main()
{
    char s[1020];
    scanf("%s",s);
    if(s[0]>='a')
    {
        s[0]='A'+s[0]-'a';
    }
    printf("%s",s);
    return 0;
}
