#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int f;
    scanf("%d",&f);
    for(int j=0;j<f;j++)
    {
        char s[10000];
        scanf("%s",s);
        int x=strlen(s),count=0,t,b[10000]={},c[10000]={};
        for(int i=0;i<x-1;i++)
        {
            b[i]=abs(s[i]-s[i+1]);
        }
        for(int i=0;i<x/2;i++)
        {
            t=s[i];
            s[i]=s[x-1-i];
            s[x-1-i]=t;
        }
        //printf("%s",s);
        for(int i=0;i<x-1;i++)
        {
            c[i]=abs(s[i]-s[i+1]);
        }
        for(int i=0;i<x-1;i++)
        {
            if(b[i]==c[i])
                count++;
        }
        if(count==x-1)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }
    return 0;
}
