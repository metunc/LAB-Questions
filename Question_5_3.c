#include <stdio.h>
void function(int x){
    switch (x){
        case 4 : printf("Four\n"); break;
        case 5 : printf("Five\n"); break;
        case 6 : printf("Six\n"); break;
        default:
            if (x%2==0)
                printf("Even\n");
            else
                printf("Odd\n");
    }
}
int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    function(x);

    return 0;
}