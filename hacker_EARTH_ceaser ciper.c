int main()
{
    int n,m,k;
    scanf("%d",&n);
    char s[10000];
    scanf("%s",s);
    scanf("%d",&m);
    k=m%26;
    int l=m%10;
    for(int i=0;i<n;i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
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
            if(s[i]>='0' && s[i]<='9')
            {
                if(s[i]+l>'9')
                {
                    s[i]=s[i]+l-57+47;
                }
                else
                {
                    s[i]=s[i]+l;
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
