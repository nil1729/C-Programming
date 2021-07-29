int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char s[100];
    scanf("%s",s);
    while(t--)
    {
        for(int i=0;i<n-1;i+=0)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i+=2;
            }
            else
            {
                i++;
            }
        }
    }
    printf("%s",s);
    return 0;
}
