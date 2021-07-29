int main()
{
    char s1[200],s2[200];
    scanf("%s%s",s1,s2);
    int n=strlen(s1);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]='a'+s1[i]-'A';
        }
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]='a'+s2[i]-'A';
        }
    }
    count=strcmp(s1,s2);
    if(count==0)
    {
        printf("0");
    }
    else
    {
        if(count<0)
        {
            printf("-1");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
