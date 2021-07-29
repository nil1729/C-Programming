int main()
{
    int n;
    scanf("%d",&n);
    char s[n][20];
    int p[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %s %d",s[i],&p[i]);
    }
    while(1)
    {
        char s[20];
        scanf(" %s",s);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(strcmp(s,s[i])==0)
            {
                printf("%s=%d",s[i],p[i]);
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("Not found");
        }
    }
    return 0;
}
