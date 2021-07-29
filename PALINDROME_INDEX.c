int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        char s[200005];
        scanf("%s",s);
        int n=strlen(s);
        for(int i=0;i<=n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                if(s[i+1]==s[n-i-1] && s[i+2]==s[n-i-2])
                    printf("%d\n",i);
                else
                {
                    if(s[i]==s[n-i-2] && s[i+1]==s[n-i-3])
                        printf("%d\n",n-i-1);
                }
                goto outFOR;
            }
        }
        printf("-1\n");
        outFOR:;
    }
    return 0;
}
