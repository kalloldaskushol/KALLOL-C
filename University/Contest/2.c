#include<stdio.h>

int main(){
    int T,Y;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &Y);
    if(Y>=1997 && Y<=2012){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    }
    
    
return 0;
}