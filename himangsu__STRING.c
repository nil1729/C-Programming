int main()
{
    char s[100]={};
    scanf("%s",s);
    int k=0;
    char s1[50]={},s2[50]={};
    for(int i=0;i<strlen(s);i+=2)
    {
        s1[k]=s[i];
        k++;
    }
    s1[k]='\0';
    int m=0;
    for(int i=1;i<strlen(s);i+=2)
    {
        s2[m]=s[i];
        m++;
    }
    s2[m]='\0';
    printf("odd indexed letter %s",s1);
    printf("\neven indexed letter %s",s2);
    return 0;
}
