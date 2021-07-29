#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
	int comparetor (const void * a, const void * b)
	{
		return ( *(char*)a - *(char*)b );
	}
int main()
{
    int q;
    scanf("%d",&q);
    getchar();
    while(q--)
    {
        char a[2000];
        char b[2000];

        scanf("%s",a);
        getchar();
        scanf("%s",b);
        getchar();
        int n1=strlen(a);
        int n2=strlen(b);
        int flag=0,index_start=0;
        qsort(a,n1,sizeof(char),comparetor);
        printf("%s\n",a);
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<n1;j++)
            {
                if(b[i]==a[j] || b[i]==('A'-'a'+a[j]))
                {
                    flag++;
                    a[j]=130;
                    break;
                }
            }
        }
        printf("%d\n",flag);
        int count=0;
        for(int i=0;i<n1;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                count++;
                break;
            }
        }
        if(flag==n2)
        {
            if(count==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
}
