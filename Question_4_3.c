#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int f(int x,int y, int z){
    return ((abs(x-y) <  z && z < abs(x+y)) || (abs(z-y) <  x && x < abs(z+y)) || (abs(x-z) <  y && y < abs(x+z)));
}

int main(){
    int x, y, z, result;
srand(time(NULL));
    x=3+ rand()%8;
    y=3+ rand()%8;
    z=3+ rand()%8;

printf("The integers are %d, %d and %d.\n",x,y,z);
printf("> Do these wires form a triangle ? --> %d\n", f(x,y,z));

    return 0;
}