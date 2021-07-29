int main()
{
    char s[200],f[300]={};
    scanf("%s",s);
    int n=strlen(s);
    int i=0,k=0;
    while(i<n)
    {
        if(s[i]!='A'&&s[i]!='a'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='U'&&s[i]!='u'&&s[i]!='Y'&&s[i]!='y')
        {
            f[k]='.';
            f[k+1]=s[i];
            k=k+2;
            i++;
        }
        else
        {
            i++;
        }
    }
    int p=strlen(f);
    for(int j=0;j<p;j++)
    {
        if(f[j]>='A'&&f[j]<='Z')
        {
            f[j]=f[j]+32;
        }
        else
        {
            f[j]=f[j];
        }
    }
    printf("%s",f);
    return 0;
}
