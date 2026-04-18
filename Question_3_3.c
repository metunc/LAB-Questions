#include <stdio.h>
#include <math.h>

int main() {
   float b1, b2, c1, c2, delta;
   float angle_a1, angle_a2, angle_b2, angle_c2_rad, angle_c2_deg;

   b1 = 180;
   b2 = 165;
   c1 = 115;
   angle_a1 = 120*M_PI/180;
   angle_a2 = 100*M_PI/180;

   float a = sqrt(pow(b1, 2) + pow(c1, 2) - 2 * b1 * c1 * cos(angle_a1));

   delta = pow((-2 * b2 * cos(angle_a2)), 2) - 4 * (pow(b2, 2) - pow(a, 2));
   c2 = (2 * b2 * cos(angle_a2) + sqrt(delta)) / 2;

   angle_b2 = asin(b2 * sin(angle_a2) / a);
   angle_c2_rad = M_PI - (angle_b2 + angle_a2);
   angle_c2_deg = angle_c2_rad * (180 / M_PI);

   printf("Length of side A: %f\n", a);
   printf("Value of angle C in radians: %f\n", angle_c2_rad);
   printf("Length of side c2: %f\n", c2);

   return 0;
}