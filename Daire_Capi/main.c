#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float radius, circum, area;
    printf("Yaricapi Giriniz :");
    scanf("%f",&radius);
    circum = PI*2*radius;
    area=radius*radius*PI;
    printf("Cevresi: %f\n",circum);
    printf("Alanı: %f\n",area);
    return 0;
}
