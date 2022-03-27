#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **x;        //int형 이중포인터선언

    printf("sizeof(x) = %lu\n", sizeof(x));     //x의 사이즈 출력, 주소를 담는 공간이기에 4바이트가 출력(32비트머신)  
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //*x의 사이즈 출력, 주소를 담는 공간이기에 4바이트가 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 사이즈 출력, int형 데이터를 담을 공간이기에 4바이트가 출력

    printf("[----- [Cho Joon Hee] [2017038076] -----]");
}