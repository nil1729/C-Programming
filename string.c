int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        count = 0;
        char s[100000];
        scanf("%s",s);
        for(int i='a';i<='z';i++)
        {
            for(int j=0;j<strlen(s);j++)
            {
                if(s[j]==i)
                {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
