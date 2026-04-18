#include <stdio.h>

int digitCount(int k, int d){

    if(k==0 && d==0)
        return 1;

    int count=0;

    while(k>0){
    if(k%10 == d)
        count++;
    k /= 10;
    };

    return count;
}



int main(){

    int m, s;
    printf("Enter a nonnegative number and a digit: ");
    scanf("%d %d", &m,&s);

    printf("The number of %d's in %d is %d\n", s, m, digitCount(m,s));

    return 0;
}