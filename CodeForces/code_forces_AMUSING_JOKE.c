	int comparetor (const void * a, const void * b)
	{
		return ( *(char*)a - *(char*)b );
	}
int main()
{
    char s1[200],s2[200],s3[200];
    int k=0,m=0,count=0;
    scanf("%s %s %s",s1,s2,s3);
    strcat(s1,s2);
    int x1=strlen(s1);
    //int x2=strlen(s2);
    int x3=strlen(s3);
    qsort (s1, x1, sizeof(char), comparetor );
    //qsort (s2, x2, sizeof(char), comparetor );
    qsort (s3, x3, sizeof(char), comparetor );
    int p=strcmp(s1,s3);
    /*for(int i=0;i<x3;i++)
    {
        if(s3[i]==s1[k])
        {
            s3[i]=' ';
            k++;
            count++;
        }
        if(s3[i]==s2[m])
        {
            s3[i]=' ';
            m++;
            count++;
        }
    }
    if(count==x1+x2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;*/
    if(p==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
