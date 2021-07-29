#include<stdio.h>
#include <string.h>
int main()
{
    int len,count;
    char str[1000];
    scanf("%[^\n]%*c",str);
    len=strlen(str);
    for(int j='a';j<='z';j++)
    {
        count=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if((str[i]== j)||(str[i]== j-32))
            {
                count=1;
                break;
            }
        }
        if(count==0)
            break;
    }
    if(count!=0)
    {
        printf("pangram");
    }
    else
    {
        printf("not pangram");
    }
    return 0;
}
