#include <stdio.h>

int main(){
    for ( int y=1,x=1; x<=9; y++){
        printf("%dX%d=%d\t",x,y,x*y);
        if (y%9 == 0){
            printf("\n");
            x++;
            y=0;
        }
    }
    

    return 0;
}
