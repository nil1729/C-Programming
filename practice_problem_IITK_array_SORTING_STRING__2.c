int seq[5]={0};
void swap(char s1[100],char p1[100],char s2[100],char p2[100])
{
    char str[100];
    strcpy(str,s1);
    strcpy(s1,s2);
    strcpy(s2,str);
    strcpy(str,p1);
    strcpy(p1,p2);
    strcpy(p2,str);
}
void order(char course[5][100],char prereq[5][100])
{
    char str[100]="NULL";
    int cnt=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(strcmp(prereq[j],str)==0)
            {
                seq[j]=cnt++;
            }
        }
        for(int j=0;j<5;j++)
            if(seq[j]==i)
                strcpy(str,course[j]);
    }
}
void sort(char course[5][100],char prereq[5][100])
{
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(strcmp(course[i],course[j])>0)
                swap(course[i],prereq[i],course[j],prereq[j]);
}
int main()
{
    char course[5][100];
    char prereq[5][100];
    for(int i=0;i<5;i++)
        scanf(" %s %s",course[i],prereq[i]);
    sort(course,prereq);
        for(int i=0;i<5;i++)
                printf(" %s\n",course[i]);
    order(course,prereq);
    for(int i=1;i<=5;i++)
        for(int j=0;j<5;j++)
            if(seq[j]==i)
                printf(" %s\n",course[j]);
    return 0;
}
