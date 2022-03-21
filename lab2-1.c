#include <stdio.h>
int main()
{
    int i;      // int형 변수 i 선언
    int *ptr;   //포인터 변수 ptr선언
    int **dptr; //이중 포인터 변수 dptr 선언

    i = 1234;

    printf("---- 박현준 2018038063 ----\n");
    printf("[checking values before ptr = &i] \n"); // i의 주소를 포인터 변수 ptr에 저장하기 전
    printf("value of i == %d\n", i);                // 변수 i에 저장된 값 1234
    printf("address of i == %p\n", &i);             // i의 주소 0061FF1C
    printf("value of ptr == %p\n", ptr);            // 포인터 변수 ptr에 저장된 값  00306000
    printf("address of ptr == %p\n", &ptr);         // 포인터 변수 ptr의 주소 0061FF18

    ptr = &i; // ptr is now holding the address of i

    printf("\n[checking values after ptr = &i] \n"); // i의 주소를 포인터 변수 ptr에 저장한 후
    printf("value of i == %d\n", i);                 // 변수 i에 저장된 값 1234
    printf("address of i == %p\n", &i);              // i의 주소 0061FF1C
    printf("value of ptr == %p\n", ptr);             // 포인터 변수 ptr에 저장된 값 0061FF1C
    printf("address of ptr == %p\n", &ptr);          // 포인터 변수 ptr의 주소 0061FF18
    printf("value of *ptr == %d\n", *ptr);           // ptr에 저장된 메모리 주소로 가서 값을 출력해옴 1234

    dptr = &ptr; // dptr is now holding the address of ptr

    printf("\n[checking values after dptr = &ptr] \n"); //
    printf("value of i == %d\n", i);                    // 변수 i에 저장된 값 1234
    printf("address of i == %p\n", &i);                 // i의 주소 0061FF1C
    printf("value of ptr == %p\n", ptr);                // 포인터 변수 ptr에 저장된 값 0061FF1C
    printf("address of ptr == %p\n", &ptr);             // 포인터 변수 ptr의 주소 0061FF18
    printf("value of *ptr == %d\n", *ptr);              // ptr에 저장된 메모리 주소로 가서 값을 출력해옴 1234
    printf("value of dptr == %p\n", dptr);              // 포인터 변수 dptr에 저장된 값 0061FF18
    printf("address of dptr == %p\n", &dptr);           // 포인터 변수 dptr의 메모리 주소 0061FF14
    printf("value of *dptr == %p\n", *dptr);            // dptr에 저장된 메모리 주소로 가서 저장된 값을 출력 0061FF1C
    printf("value of **dptr == %d\n", **dptr);          // 포인터를 두 번 역참조하여 i에 저장되어 있는 값을 출력한다. 1234

    *ptr = 7777; // ptr에 저장된 메모리 주소에 저장된 값을 7777로 바꾼다

    printf("\n[after *ptr = 7777] \n");        // ptr에 저장된 메모리 주소에 저장된 값을 7777로 바꾼 후
    printf("value of i == %d\n", i);           // i의 값 7777
    printf("value of *ptr == %d\n", *ptr);     // ptr에 저장된 메모리 주소에 저장된 값을 출력한다 7777
    printf("value of **dptr == %d\n", **dptr); // 포인터를 두 번 역참조하여 i에 저장되어 있는 값을 출력한다. 7777

    **dptr = 8888; // 포인터를 두 번 역참조하여 i에 저장되어 있는 값을 8888로 바꾼다.

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);           // i의 값 출력 8888
    printf("value of *ptr == %d\n", *ptr);     // ptr에 저장된 메모리 주소에 저장된 값 출력 8888
    printf("value of **dptr == %d\n", **dptr); // 포인터를 두 번 역참조하여 i에 저장되어 있는 값을 출력한다. 8888

    return 0;
}