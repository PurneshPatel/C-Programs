#include <stdio.h>
#include <conio.h>
 
int main(){
    float length, width, area;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);
    /* Area of Rectangle = Length X Width */
    area = length * width;
    printf("Area of Rectangle : %0.4f\n", area);
     
    getch();
    return 0;
}
