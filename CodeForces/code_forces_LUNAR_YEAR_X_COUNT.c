int main()
{
    char s[600][600];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    int count=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(s[i][j]=='X' && s[i+1][j+1]=='X' && s[i-1][j-1]=='X' && s[i+1][j-1]=='X' && s[i-1][j+1]=='X')
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
