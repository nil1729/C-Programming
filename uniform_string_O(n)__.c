int main()
{
    char s[100];
    scanf("%s",s);
    int T;
    scanf("%d",&T);
    int value[10002000]={0};//GIVE  AN ERROR;
    char prev='0';
    int mul=1;
    for(int i=0;i<strlen(s);i++)
    {
        int w=s[i]-'a'+1;
        if(s[i]==prev)
        {
            mul++;
            w*=mul;
        }
        else
            mul=1;
        prev=s[i];
        value[w]=1;
    }
    while(T--)
    {
        int n;
        scanf("%d",&n);
        if(value[n])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
