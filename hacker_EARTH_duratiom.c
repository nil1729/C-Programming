int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int sh,sm,eh,em,dh,dm;
        scanf("%d %d %d %d",&sh,&sm,&eh,&em);
        if(sm>em)
        {
            dm=em+60-sm;
            dh=eh-1-sh;
        }
        else
        {
            dm=em-sm;
            dh=eh-sh;
        }
        printf("%d %d\n",dh,dm);
        n--;
    }
    return 0;
}
