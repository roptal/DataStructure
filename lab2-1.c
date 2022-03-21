#include <stdio.h>
int main()
{
    int i;      // int�� ���� i ����
    int *ptr;   //������ ���� ptr����
    int **dptr; //���� ������ ���� dptr ����

    i = 1234;

    printf("---- ������ 2018038063 ----\n");
    printf("[checking values before ptr = &i] \n"); // i�� �ּҸ� ������ ���� ptr�� �����ϱ� ��
    printf("value of i == %d\n", i);                // ���� i�� ����� �� 1234
    printf("address of i == %p\n", &i);             // i�� �ּ� 0061FF1C
    printf("value of ptr == %p\n", ptr);            // ������ ���� ptr�� ����� ��  00306000
    printf("address of ptr == %p\n", &ptr);         // ������ ���� ptr�� �ּ� 0061FF18

    ptr = &i; // ptr is now holding the address of i

    printf("\n[checking values after ptr = &i] \n"); // i�� �ּҸ� ������ ���� ptr�� ������ ��
    printf("value of i == %d\n", i);                 // ���� i�� ����� �� 1234
    printf("address of i == %p\n", &i);              // i�� �ּ� 0061FF1C
    printf("value of ptr == %p\n", ptr);             // ������ ���� ptr�� ����� �� 0061FF1C
    printf("address of ptr == %p\n", &ptr);          // ������ ���� ptr�� �ּ� 0061FF18
    printf("value of *ptr == %d\n", *ptr);           // ptr�� ����� �޸� �ּҷ� ���� ���� ����ؿ� 1234

    dptr = &ptr; // dptr is now holding the address of ptr

    printf("\n[checking values after dptr = &ptr] \n"); //
    printf("value of i == %d\n", i);                    // ���� i�� ����� �� 1234
    printf("address of i == %p\n", &i);                 // i�� �ּ� 0061FF1C
    printf("value of ptr == %p\n", ptr);                // ������ ���� ptr�� ����� �� 0061FF1C
    printf("address of ptr == %p\n", &ptr);             // ������ ���� ptr�� �ּ� 0061FF18
    printf("value of *ptr == %d\n", *ptr);              // ptr�� ����� �޸� �ּҷ� ���� ���� ����ؿ� 1234
    printf("value of dptr == %p\n", dptr);              // ������ ���� dptr�� ����� �� 0061FF18
    printf("address of dptr == %p\n", &dptr);           // ������ ���� dptr�� �޸� �ּ� 0061FF14
    printf("value of *dptr == %p\n", *dptr);            // dptr�� ����� �޸� �ּҷ� ���� ����� ���� ��� 0061FF1C
    printf("value of **dptr == %d\n", **dptr);          // �����͸� �� �� �������Ͽ� i�� ����Ǿ� �ִ� ���� ����Ѵ�. 1234

    *ptr = 7777; // ptr�� ����� �޸� �ּҿ� ����� ���� 7777�� �ٲ۴�

    printf("\n[after *ptr = 7777] \n");        // ptr�� ����� �޸� �ּҿ� ����� ���� 7777�� �ٲ� ��
    printf("value of i == %d\n", i);           // i�� �� 7777
    printf("value of *ptr == %d\n", *ptr);     // ptr�� ����� �޸� �ּҿ� ����� ���� ����Ѵ� 7777
    printf("value of **dptr == %d\n", **dptr); // �����͸� �� �� �������Ͽ� i�� ����Ǿ� �ִ� ���� ����Ѵ�. 7777

    **dptr = 8888; // �����͸� �� �� �������Ͽ� i�� ����Ǿ� �ִ� ���� 8888�� �ٲ۴�.

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);           // i�� �� ��� 8888
    printf("value of *ptr == %d\n", *ptr);     // ptr�� ����� �޸� �ּҿ� ����� �� ��� 8888
    printf("value of **dptr == %d\n", **dptr); // �����͸� �� �� �������Ͽ� i�� ����Ǿ� �ִ� ���� ����Ѵ�. 8888

    return 0;
}