int main()
{
    char s1[30],s2[30],t[2000],T[2000]={};
    scanf(" %s",s1);
    scanf(" %s",s2);
    scanf(" %s",t);
    int x=strlen(t);
    for(int i=0;i<x;i++)
    {
        if(t[i]>='A')
        {
        if(t[i]<='Z')
        {
            t[i]='a'-'A'+t[i];
        for(int j=0;j<26;j++)
        {
            if(t[i]==s1[j])
            {
                T[i]=s2[j]-32;
                break;
            }
        }
        }
        else
        {
        for(int j=0;j<26;j++)
        {
            if(t[i]==s1[j])
            {
                T[i]=s2[j];
                break;
            }
        }
        }
        }
        else
            T[i]=t[i];
    }
    printf("%s",T);
    return 0;
}
