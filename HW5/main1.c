#include <stdio.h>

int main(){
    
    for (  int x = 1; x <= 7; x++){
        for (int y = 1; y <= 7; y++){
            if (y<=7-x){
                printf(" ");
                
            }
            else{
                    printf("%d ",x);
                }
        }
        
        printf("\n");
    }
    

    return 0;
}
