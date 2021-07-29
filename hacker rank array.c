int main()
{
    int t;
    scanf("%d",&t);
    for(int j=t;j>0;j--)
    {
        int a[10000]={},b[10000]={},c[10000]={},d[10000]={},e[10000]={},f[10000]={},g[10000]={},h[10000]={},j[10000]={},k[10000]={};
        int mina=0,minb=0,minc=0,mind=0,mine=0,minf=0,ming=0,minh=0,minj=0,mink=0;
        char s[10000];
        scanf("%s",s);
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='h')
                a[i]=i;
            if(s[i]=='a')
                b[i]=i;
            if(s[i]=='c')
                c[i]=i;
            if(s[i]=='k')
                d[i]=i;
            if(s[i]=='e')
                e[i]=i;
            if(s[i]=='r')
                f[i]=i;
            if(s[i]=='r')
                g[i]=i;
            if(s[i]=='a')
                h[i]=i;
            if(s[i]=='n')
                j[i]=i;
            if(s[i]=='k')
                k[i]=i;
        }
        mina=10000;
        for(int i=0;i<10000;i++)
        {
            if(a[i]>=0  && a[i]<mina)
                mina =a[i];
        }
         minb=10000;
        for(int i=0;i<10000;i++)
        {
            if(b[i]>mina  && b[i]<minb)
                minb=b[i];
        }
        minc=10000;
        for(int i=0;i<10000;i++)
        {
            if(c[i]>minb  && c[i]<minc)
                minc=c[i];
        }
         mind=10000;
        for(int i=0;i<10000;i++)
        {
            if(d[i]>minc  && d[i]<mind)
                mind=d[i];
        }
           mine=10000;
        for(int i=0;i<10000;i++)
        {
            if(e[i]>mind  && e[i]<mine)
                mine =e[i];
        }
         minf=10000;
        for(int i=0;i<10000;i++)
        {
            if(f[i]>mine  && f[i]<minf)
                minf=f[i];
        }
        ming=10000;
        for(int i=0;i<10000;i++)
        {
            if(g[i]>minf  && g[i]<ming)
                ming =g[i];
        }
         minh=10000;
        for(int i=0;i<10000;i++)
        {
            if(h[i]>ming  && h[i]<minh)
                minh =h[i];
        }
        minj=10000;
        for(int i=0;i<10000;i++)
        {
            if(j[i]>minh  && j[i]<minj)
                minj =j[i];
        }
         mink=10000;
        for(int i=0;i<10000;i++)
        {
            if(k[i]>minj  && k[i]<mink)
                mink =k[i];
        }
        if(mina!=10000 &&minb!=10000 &&minc!=10000 &&mind!=10000 &&mine!=10000 &&minf!=10000 &&ming!=10000 &&minh!=10000 &&minj!=10000 &&mink!=10000 )
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
