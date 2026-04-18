#include <stdio.h>

int main(){

    int x=10;
    int *y=&x;
    int **z=&y;

    printf("x=%d, *y=%d, **z=%d\n",x,*y,**z);

    *y=20;
    printf("x=%d\n",x);

    **z=30;
    printf("x=%d\n",x);
    
    
    
    
    
    return 0;
}