int main()
{
    char s1[10000],s2[10000];
    int count=0;
    scanf("%s%s",s1,s2);
    int x=strlen(s1);
    int y=strlen(s2);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]=' ';
                count++;
                break;
            }
        }
    }
    printf("%d",x+y-2*count);
    return 0;
}
