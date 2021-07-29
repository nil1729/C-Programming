int main()
{
    int n,i=0,j=1;
    scanf("%d",&n);
    char s[100];
    scanf(" %s",s);
    while(i<n)
    {
        printf("%c",s[i]);
        i=i+j;
        j++;
    }
    return 0;
}
