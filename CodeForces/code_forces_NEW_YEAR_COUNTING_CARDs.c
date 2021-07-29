int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s),count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            count++;
        if(s[i]=='1' ||s[i]=='3' ||s[i]=='5' ||s[i]=='7' ||s[i]=='9')
            count++;
    }
    printf("%d",count);
    return 0;
}
