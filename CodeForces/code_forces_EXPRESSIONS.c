int main()
{
    int a,b,c,s[8];
    scanf("%d%d%d",&a,&b,&c);
     s[1]=a+b*c;
     s[2]=a*(b+c);
     s[3]=a*b*c;
     s[4]=(a+b)*c;
     s[5]=a+b+c;
    int max=s[1];
    for(int i=1;i<=5;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }
    printf("%d",max);
    return 0;
}
