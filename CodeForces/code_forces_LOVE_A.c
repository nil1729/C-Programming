int main()
{
    char s[100];
    scanf("%s",s);
    float p=strlen(s);
    int n =strlen(s);
    float count;
    count = 0.0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
            count++;
    }
    if(count > p/2)
    {
        printf("%d",n);
        return 0;
    }
    else
    {
        int x = count*2 - 1;
        printf("%d",x);
        return 0;
    }
}
