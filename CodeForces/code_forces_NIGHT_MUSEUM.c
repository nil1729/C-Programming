int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s);
    int sum=0;
    int x=abs('a'-s[0]);
    int y=abs(x-26);
    if(x>y)
        sum+=y;
    else
        sum+=x;
    for(int i=1;i<n;i++)
    {
        x=abs(s[i]-s[i-1]);
        y=abs(x-26);
        if(x>y)
            sum+=y;
        else
            sum+=x;
    }
    printf("%d",sum);
    return 0;
}
