int main()
{
    char s[1500];
    scanf("%[^\n]%*c",s);
    int n=strlen(s),count=0;
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
