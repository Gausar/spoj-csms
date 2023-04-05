#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f%f", &a,&b);
    printf("%.1f\n%.1f\n",sqrt((pow(a,2)+(pow(b,2)))), (a*b)/2);
    return 0;
}