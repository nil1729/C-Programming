#include <stdio.h>
int fact(int x){
    if(x<2){
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}

int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        printf("%d\n",fact(x));
    }
}