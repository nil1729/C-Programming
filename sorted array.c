int main()
{
    int l,count=0;
    char s[100],a[3]="SOS";
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        int x=i%3;
        if(s[i]!=a[x])
            count++;
    }
    printf("%d",count);
    return 0;
}
