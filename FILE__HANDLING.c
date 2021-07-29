#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct STUDENT
{
    int roll_no;
    char name[20];
};
int main()
{
    int N;
    printf("ENTER THE NUMBER OF STUDENT\n");
    scanf("%d",&N);
    struct STUDENT s[N];
    FILE *fp;
    fp=fopen("output.txt","w");
    for(int i=0;i<N;i++)
    {
        printf("STUDENT  PROFILE %d\n",i+1);
        printf("ENTER THE ROLL NO:  ");
        scanf("%d",&s[i].roll_no);
        printf("ENTER THE NAME OF THE STUDENT:\t");
        scanf("%s",s[i].name);
        fprintf(fp,"STUDENT NO. %d :\nNAME OF  THE STUDENT: %s\n ROLL NO OF THE STUDENT: %d\n\n",i+1,s[i].name,s[i].roll_no);
        printf("\n");
    }
    fclose(fp);
    printf("\n\nSTUDENT  INFORMATION  STORED IN  <output.txt> :\n\n ");
    FILE *FP;
    FP=fopen("output.txt","r");
    if(FP==NULL)
    {
        printf("FILE NOT FOUND");
        return 0;
    }
    char x[300];
    while(fgets(x,300,FP)!=NULL)
    {
        printf("%s",x);
    }
    return 0;
}
