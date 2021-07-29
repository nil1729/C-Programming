int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s),c[150]={};
    for(int i=0;i<n;i++)
    {
        c[s[i]]++;
    }
    int count=0;
    for(int j='a';j<='z';j++)
    {
        if(c[j]>0)
            count++;
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
