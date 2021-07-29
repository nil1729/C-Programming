int main()
{
    char s1[200],s2[200],a[200]={};
    scanf("%s%s",s1,s2);
    int n=strlen(s1);
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
            a[i]='0';
        else
            a[i]='1';
    }
    printf("%s",a);
    return 0;
}
