int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char N[120];
        scanf("%s",N);
        int l=strlen(N);
        int count=0;
        for(int j=0;j<l;j++)
        {
            if(N[j]=='0')
                count+=6;
            if(N[j]=='1')
                count+=2;
            if(N[j]=='2')
                count+=5;
            if(N[j]=='3')
                count+=5;
            if(N[j]=='4')
                count+=4;
            if(N[j]=='5')
                count+=5;
            if(N[j]=='6')
                count+=6;
            if(N[j]=='7')
                count+=3;
            if(N[j]=='8')
                count+=7;
            if(N[j]=='9')
                count+=6;
        }
        if(count%2==1)
        {
            printf("7");
            count-=3;
        }
        while(count>=2)
        {
            printf("1");
            count-=2;
        }
        printf("\n");
    }
    return 0;
}
