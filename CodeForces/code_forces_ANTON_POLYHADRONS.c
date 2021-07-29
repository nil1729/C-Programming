int main()
{
    int n,count=0;
    scanf("%d",&n);
    char s[200200][15];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s[i]);
        if(s[i][0]=='T')
            count+=4;
        if(s[i][0]=='C')
            count+=6;
        if(s[i][0]=='O')
            count+=8;
        if(s[i][0]=='D')
            count+=12;
        if(s[i][0]=='I')
            count+=20;
    }
    printf("%d",count);
    return 0;
}
