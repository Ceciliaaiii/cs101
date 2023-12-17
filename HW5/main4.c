#include <stdio.h>

int main(){
    int i =12345;
    int a = i/10000;
    int b = i/1000-a*10;
    int c = i/100-a*100-b*10;
    int d = i/10-a*1000-b*100-c*10;
    int e = i-a*10000-b*1000-c*100-d*10;
    
    printf("%d%d%d%d%d",a,e,c,d,b);

    return 0;
}
