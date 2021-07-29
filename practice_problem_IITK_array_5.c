#include <stdio.h>
int main()
{
char a[100], b[100], c[100];
int ch, acnt=0, bcnt=0,i=0;
ch=getchar();
while( ch !=',' && ch !=EOF && acnt<100)
{
a[acnt] = ch; acnt++;
ch = getchar();
}
ch = getchar();
while( ch !=',' && ch!= EOF && bcnt<100)
{
b[bcnt] = ch; bcnt++;
ch = getchar();
}
for(i=0; i<acnt; i++)
c[i] = a[i];
for(i=0; i<bcnt; i++)
c[i+acnt] = b[i];
for(i=0; i<acnt+bcnt; i++)
putchar(c[i]);
return 0;
}
