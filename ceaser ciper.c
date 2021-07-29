int main()
{
    int n,m,k;
    scanf("%d",&n);
    char s[100];
    scanf("%s",s);
    scanf("%d",&m);
    k=m%26;
    for(int i=0;i<n;i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(s[i]+k>'z')
                {
                    s[i]=s[i]+k-122+96;
                }
                else
                {
                    s[i]=s[i]+k;
                }
            }
            if(s[i]>='A' &&  s[i]<='Z')
            {
                if(s[i]+k>'Z')
                {
                    s[i]=s[i]+k-90+64;
                }
                else
                {
                    s[i]=s[i]+k;
                }
            }
        }
        else
        {
            s[i]=s[i];
        }
    }
    printf("%s",s);
    return 0;
}
