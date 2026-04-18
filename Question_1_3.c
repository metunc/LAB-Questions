#include <stdio.h>

int main(){

    float h;
        printf("Enter the height of rectangle (h):");
        scanf("%f",&h);
    float l;
        printf("Enter the length of rectangle (l):");
        scanf("%f",&l);

printf("The area of the rectangle is: %f\n",h*l );
printf("The circumference of the rectangle is: %f\n", 2*(h+l));

return 0;

}