int main()
{
    int r,c,RAW=0,COL=0;
    scanf("%d %d",&r,&c);
    char s[r][c];
    for(int i=0;i<r;i++)
        scanf("%s",s[i]);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(s[i][j]!='.')
            {
                RAW++;
                break;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(s[j][i]!='.')
            {
                COL++;
                break;
            }
        }
    }
    int raw=(r-RAW)*c;
    int col=(c-COL)*(RAW);
    printf("%d",raw+col);
    return 0;
}
