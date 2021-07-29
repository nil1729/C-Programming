int main()
{
    char s[200];
    scanf("%[^\n]%*c",s);
    int n=strlen(s);
    for(int i=n-1;i>=0;i--)
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
        {
            if((s[i]=='A'||s[i]=='a')||(s[i]=='E'||s[i]=='e')||(s[i]=='I'||s[i]=='i')||(s[i]=='O'||s[i]=='o')||(s[i]=='U'||s[i]=='u')||(s[i]=='Y'||s[i]=='y'))
            {
                printf("YES");
                return 0;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
}
