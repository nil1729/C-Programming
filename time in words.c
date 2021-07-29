int main()
{
    int h,m;
    char ch[13][12]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","one"};
    char cm[30][20]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};
    scanf("%d%d",&h,&m);
    if(m==0)
    {
        printf("%s o' clock",ch[h-1]);
    }
    else
    {
    if(m>30)
    {
        if(m==59)
        {
            printf("one minute to %s",ch[h]);
        }
        if(m!=59 && m!=45)
        {
            printf("%s minutes to %s",cm[59-m],ch[h]);
        }
        if(m==45)
        {
            printf("quarter to %s",ch[h]);
        }

    }
    else
    {
        if(m==1)
        {
            printf("one minute past %s",ch[h-1]);
        }
        if(m!=1 && m!=15 && m!=30)
        {
            printf("%s minutes past %s",cm[m-1],ch[h-1]);
        }
        if(m==15)
        {
            printf("quarter past %s",ch[h-1]);
        }
        if(m==30)
        {
            printf("half past %s",ch[h-1]);
        }
    }
    }
    return 0;
}
