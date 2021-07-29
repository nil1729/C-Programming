int main()
{
    char s[102];
    int flag = 0;
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]-s[i+1] < 0)
            flag++;
    }
    if(flag > 0)
    {

    }
    else
    {
        printf("no answer");
    }
    return 0;
}
