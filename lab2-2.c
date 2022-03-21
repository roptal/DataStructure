#include <stdio.h>
int main(void)
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("---- ������ 2018038063 ----\n");
    printf("Size of char : %ld bytes\n", sizeof(charType));     // char�� ������ size ��� 1bytes
    printf("Size of int : %ld bytes\n", sizeof(integerType));   // int�� ������ size ��� 4bytes
    printf("Size of float : %ld bytes\n", sizeof(floatType));   // float�� ������ size ��� 4bytes
    printf("Size of double : %ld bytes\n", sizeof(doubleType)); // double�� ������ size ��� 8bytes

    printf("-----------------------------------------------\n");

    printf("Size of char : %ld bytes\n", sizeof(char));     // �ڷ��� char�� size ��� 1bytes
    printf("Size of int : %ld bytes\n", sizeof(int));       // �ڷ��� int�� size ��� 4bytes
    printf("Size of float : %ld bytes\n", sizeof(float));   // �ڷ��� float�� size ��� 4bytes
    printf("Size of double : %ld bytes\n", sizeof(double)); // �ڷ��� double�� size ��� 8bytes

    printf("-----------------------------------------------\n");

    printf("Size of char* : %ld bytes\n", sizeof(char *));     // char ������ ������ ũ�� 4bytes
    printf("Size of int* : %ld bytes\n", sizeof(int *));       // int ������ ������ ũ�� 4bytes
    printf("Size of float* : %ld bytes\n", sizeof(float *));   // float ������ ������ ũ�� 4bytes
    printf("Size of double* : %ld bytes\n", sizeof(double *)); // double ������ ������ ũ�� 4bytes

    return 0;
}