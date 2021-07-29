int main()
{
    int n,count[130]={};
    char s[100200];
    scanf("%d",&n);
    scanf(" %s",s);
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='z')
            count['z']++;
        if(s[i]=='r')
            count['r']++;
        if(s[i]=='n')
            count['n']++;
        if(s[i]=='e')
            count['e']++;
        if(s[i]=='o')
            count['o']++;
    }
    while(count['o']>0 && count['n']>0 && count['e']>0)
    {
        printf("1 ");
        count['o']--;
        count['n']--;
        count['e']--;
    }
    while(count['z']>0 && count['e']>0 && count['r']>0 && count['o']>0)
    {
        printf("0 ");
        count['z']--;
        count['e']--;
        count['r']--;
        count['o']--;
    }
    return 0;
}
