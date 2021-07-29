int main()
{
    char s[200];
    int pos[150]={},j=0,x=0;
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='h')
        {
            pos[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='e')
        {
            pos[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='l')
        {
            pos[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='l')
        {
            pos[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='o')
        {
            pos[j]=i;
            x=i;
            j++;
            break;
        }
    }
    int count=0;
    for(int i=0;i<j-1;i++)
    {
        if(pos[i]<pos[i+1])
        {
            count++;
        }
    }
    if(count==4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
