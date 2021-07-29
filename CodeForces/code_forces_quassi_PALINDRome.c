int main()
{
    char s[10];
    scanf("%s",s);
    //printf("%s\n\n",s);
    int flag=0;
    for(int i=0;i<strlen(s)/2;i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("YES");
        return 0;
    }
    else
    {
        int check=0;
        int N=0;
        int n=strlen(s);
        //printf("%d\n\n",n);
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                N=i+1;
                break;
            }
        }
        //printf("%d\n\n",N);
        for(int i=0;i<N/2;i++)
        {
            if(s[i]!=s[N-1-i])
            {
                check++;
            }
        }
        if(check==0)
        {
            printf("YES");
            return 0;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    return 0;
}
