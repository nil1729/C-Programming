void swap(char s1[100],char s2[100])
{
    char str[100];
    strcpy(str,s1);
    strcpy(s1,s2);
    strcpy(s2,str);
}
void sort(char names[5][100])
{
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(strcmp(names[i],names[j])>0)
                swap(names[i],names[j]);
}
int main()
{
    char names[5][100];
    for(int i=0;i<5;i++)
        scanf(" %s",names[i]);
    sort(names);
    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);
    return 0;
}
