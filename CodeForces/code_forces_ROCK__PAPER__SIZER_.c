int main()
{
    char s1[100],s2[100],s3[100];
    scanf("%s\n%s\n%s",s1,s2,s3);
    char x=s1[0],y=s2[0],z=s3[0];
    //printf("%c %c %c\n",x,y,z);
    if((x==y&&x==z)||(x!=y&&x!=z&&y!=z))
    {
        printf("?");
        return 0;
    }
    //printf("%c %c %c\n",x,y,z);
    else
    {
        if(x==y)
        {
            if(x=='r'){
            if(x=='r'&&z=='p'){
                printf("S");
                return 0;
            }
            else
            {
                printf("?");
                return 0;
            }
            }
            if(x=='s'){
            if(x=='s'&&z=='r'){
                printf("S");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
            if(x=='p'){
            if(x=='p'&&z=='s'){
                printf("S");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
        }
        if(y==z)
        {
            if(y=='r'){
            if(y=='r'&&x=='p'){
                printf("F");
                return 0;
            }
            else
            {
                printf("?");
                return 0;
            }
            }
            if(y=='s'){
            if(y=='s'&&x=='r'){
                printf("F");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
            if(y=='p'){
            if(y=='p'&&x=='s'){
                printf("F");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
        }
        if(z==x)
        {
            if(z=='r'){
            if(z=='r'&&y=='p'){
                printf("M");
                return 0;
            }
            else
            {
                printf("?");
                return 0;
            }
            }
            if(z=='s'){
            if(z=='s'&&y=='r'){
                printf("M");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
            if(z=='p'){
            if(z=='p'&&y=='s'){
                printf("M");
                return 0;
            }
            else{
                printf("?");
                return 0;
            }
            }
        }
    }
    return 0;
}
