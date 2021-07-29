int main()
{
    int n;
    scanf("%d",&n);
    char s[200][5];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(s[i][0]!='X')
        {
            if(s[i][0]=='+')
            {
                ++x;
            }
            else
            {
                --x;
            }
        }
        else
        {
            if(s[i][1]=='+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
    }
    printf("%d",x);
    return 0;
}
