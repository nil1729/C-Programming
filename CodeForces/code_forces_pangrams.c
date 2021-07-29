int main()
{
    int n,count[150]={},sum=0;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            {
                count[i]++;
                break;
            }
        }
    }
    for(int i='A';i<='Z';i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            {
                count[i+32]++;
                break;
            }
        }
    }
    for(int i='a';i<='z';i++)
    {
        if(count[i]>0)
            sum++;
    }
    if(sum==26)
        printf("YES");
    else
        printf("NO");
    return 0;
}
