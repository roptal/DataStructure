#include <stdio.h>
int main(void)
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("---- 박현준 2018038063 ----\n");
    printf("Size of char : %ld bytes\n", sizeof(charType));     // char형 변수의 size 출력 1bytes
    printf("Size of int : %ld bytes\n", sizeof(integerType));   // int형 변수의 size 출력 4bytes
    printf("Size of float : %ld bytes\n", sizeof(floatType));   // float형 변수의 size 출력 4bytes
    printf("Size of double : %ld bytes\n", sizeof(doubleType)); // double형 변수의 size 출력 8bytes

    printf("-----------------------------------------------\n");

    printf("Size of char : %ld bytes\n", sizeof(char));     // 자료형 char의 size 출력 1bytes
    printf("Size of int : %ld bytes\n", sizeof(int));       // 자료형 int의 size 출력 4bytes
    printf("Size of float : %ld bytes\n", sizeof(float));   // 자료형 float의 size 출력 4bytes
    printf("Size of double : %ld bytes\n", sizeof(double)); // 자료형 double의 size 출력 8bytes

    printf("-----------------------------------------------\n");

    printf("Size of char* : %ld bytes\n", sizeof(char *));     // char 포인터 변수의 크기 4bytes
    printf("Size of int* : %ld bytes\n", sizeof(int *));       // int 포인터 변수의 크기 4bytes
    printf("Size of float* : %ld bytes\n", sizeof(float *));   // float 포인터 변수의 크기 4bytes
    printf("Size of double* : %ld bytes\n", sizeof(double *)); // double 포인터 변수의 크기 4bytes

    return 0;
}