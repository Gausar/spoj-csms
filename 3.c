#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    printf("%.1f\n%.1f\n", pow(a,3), 4*pow(a,2));
    return 0;
}