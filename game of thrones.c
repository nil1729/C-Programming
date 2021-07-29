int main()
{
    int l,a[26]={},odd=0,flag=0;
    char s[100000];
    scanf("%s",s);
    l=strlen(s);
    for(int j=0;j<l;j++)
        {
            a[s[j]-'a']++
        }
    for(int i=0;i<26;i++)
        {
            if(a[i]%2==1)
            {
                odd++;
            }
        }
        if(odd>1)
        {
            flag=1;
        }
        if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
