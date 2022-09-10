/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius*/
#include<stdio.h>

int main() {
    float A,R;
    printf("Area of circle is A having the radius R,input value of R: ");
    scanf("%f",&R);

    A=3.14*R*R;
    printf("Replace A with area & R with radius(that means area): %0.2f",A);

}
