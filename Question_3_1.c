#include <stdio.h>
#include <math.h>

int main(){

int a=5, b=7, gama_deg=55;

float c = sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(gama_deg*M_PI/180));

printf("The length of c: %f\n", c);

float a_rad = asin(a*sin(gama_deg*M_PI/180)/c);
float b_rad = asin(b*sin(gama_deg*M_PI/180)/c);

printf("Angle a: %f\n",a_rad*180/M_PI);
printf("Angle b: %f\n",b_rad*180/M_PI);

if (b_rad > M_PI/6 && b_rad < M_PI/3) {
    printf("1\n");
} else{

    printf("0\n");
}





    return 0;
}