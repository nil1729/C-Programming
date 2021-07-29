#include<stdio.h>
int main()
{
    unsigned long long int n,rep,rem,k,count=0,count1=0;
    char s[100];
    scanf("%s",s);
    scanf("%lld",&n);
    k=strlen(s);
    rep=n/k;
    rem=n%k;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a')
            count++;
        if((s[i]=='a')&&(i<rem))
            count1++;
    }
    printf("%lld",(count*rep)+count1);
    return 0;
}
