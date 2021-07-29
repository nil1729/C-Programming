int main()
{
    char s[200000];
    int T;
    scanf("%s",s);
    scanf("%d",&T);
    s[strlen(s)]='0';
    while(T--)
    {
        int x;
        scanf("%d",&x);
        int flag=0;
        int count=s[0]-'a'+1;
        for(int i=0;i<strlen(s);i++)
        {
            if(count==x)
            {
                flag++;
                printf("Yes\n");
                break;
            }
            if(s[i]==s[i+1])
                count+=(s[i+1]-'a'+1);
            if(count==x)
            {
                flag++;
                printf("Yes\n");
                break;
            }
            if(s[i]!=s[i+1])
            {
                count=s[i+1]-'a'+1;
            }
        }
        if(flag==0)
            printf("No\n");
    }
    return 0;
}
