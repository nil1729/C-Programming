int main()
{
    int n;
    scanf("%d",&n);
    char s[105][105];
    for(int i=0;i<n;i++)
    {
        scanf(" %s",s[i]);
    }
    printf("NO\n");
    for(int i=1;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            int x=strcmp(s[i],s[j]);
            if(x==0)
            {
                flag++;
                printf("YES\n");
                break;
            }
        }
        if(flag==0)
            printf("NO\n");
    }
    return 0;
}
