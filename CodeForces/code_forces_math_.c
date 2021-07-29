int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i+=2)
    {
        for(int j=i;j<n;j+=2)
        {
            if(s[i]>s[j])
            {
                int t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("%s",s);
    return 0;
}
