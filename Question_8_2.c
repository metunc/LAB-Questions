#include <stdio.h>

int main(){
    int *temp,a1=40;
    int a2=0;
    int *b1=&a1;
    int *b2=&a2;

    printf("Before Swap\n");
    printf("b1 points to: %d\n",*b1);
    printf("b2 points to: %d\n",*b2);

    temp=b1;
    b1=b2;
    b2=temp;
    printf("After Swap\n");
    printf("b1 points to: %d\n",*b1);
    printf("b2 points to: %d\n",*b2);




    return 0;
}