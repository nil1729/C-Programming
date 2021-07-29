int main()
{
    char s[100];
    char t[100];
    scanf("%s%s",s,t);
    int n=strlen(s);
    int x=strlen(t);
    int i=0,k=0;
    while(k<n && i<x)
    {
        if(s[k]==t[i])
        {
            k++;
        }
        i++;
    }
    printf("%d",k+1);
    return 0;
}
