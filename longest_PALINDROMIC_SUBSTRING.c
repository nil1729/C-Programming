int main()
{
    char s[20];
    scanf("%s",s);
    int n=strlen(s);
    int max=1;
    int begin=0;
    int palindrome[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          palindrome[i][j]=0;
    for(int i=0;i<n;i++)
    {
        palindrome[i][i]=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            palindrome[i][i+1]=1;
            begin=i;
            max=2;
        }
    }
    for(int len=3;len<=n;len++)
    {
        for(int i=0;i<n-len+1;i++)
        {
            int j=i+len-1;
            if(s[i]==s[j] && palindrome[i+1][j-1])
            {
                palindrome[i][j]=1;
                begin=i;
                max=len;
            }
        }
    }
    printf("MAXIMUM LENGTH IS %d\n",max);
    for(int i=begin;i<=max+begin-1;i++)
        printf("%c",s[i]);
    return 0;
}
