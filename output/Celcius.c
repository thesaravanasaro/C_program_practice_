#include<stdio.h>
float farenheit_to_celsius(float f)
{
    return ((f - 32.0)*5.0/9.0);
}
int main()
{
    float f = 40;
    printf("Temperatue to celsuius : %0.2f",farenheit_to_celsius(f));
    return 0;
}
