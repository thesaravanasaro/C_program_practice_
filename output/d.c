#include<stdio.h>
int main(){
    int integerType;
    int charType;
    float floatType;
    double doubleType;
    
    printf("Size of the int is:%d",sizeof(integerType));
    printf("/n" "The size of char is:%ld",sizeof(charType));
    printf("/n""Size of float is: %ld",sizeof(floatType));
    printf("/n" "size of double is: %ld",sizeof(doubleType));
    return 0;
    }