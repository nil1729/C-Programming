int check(char s[],char t[])
{
    int x=strlen(s),y=strlen(t);
    if(x!=y)
    {
        if(x>y)
            return 1;
        else
            return 0;
    }
    else
    {
        int p=strcmp(s,t);
        if(p>=0)
            return 1;
        else
            return 0;
    }
}
void swap(char s[],char t[])
{
    char temp[100];
    strcpy(temp,s);
    strcpy(s,t);
    strcpy(t,temp);
}
int main()
{
    int n;
    scanf("%d",&n);
    char s[n][100];
    int len[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %s",s[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check(s[i],s[j]))
                swap(s[i],s[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",s[i]);
    }
    return 0;
}
