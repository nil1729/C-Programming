#include<stdio.h>
int main()
{
    char s[100];
    int count=0;
    int ch;
    int i;
    ch=getchar();
    while((ch=getchar())!=EOF && count<100)
    {
        s[count]=ch;
        count++;
    }
    i=count-1;
    while(i>=0)
    {
        putchar(s[i]);
        i--;
    }
    return 0;
}
