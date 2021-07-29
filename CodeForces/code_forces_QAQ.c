int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s),count=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<n-1;j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(s[k]=='Q')
                            count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
