int main()
{
    int n,i=0,count=0;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    while(i<n)
    {
        //printf("%d\t",i);
        if((s[i]=='R'&&s[i+1]=='U')||(s[i]=='U'&&s[i+1]=='R'))
        {
            //printf("%c%c\t",s[i],s[i+1]);
            count++;
            //printf("%d\n",count);
            i+=2;
        }
        else
        {
            //printf("%c\t",s[i]);
            count++;
            //printf("%d\n",count);
            i++;
        }
    }
    printf("%d",count);
    return 0;
}
