#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];        //int형 배열 선언
    int *plist[5];      //int형 포인터 배열 선언

    list[0] = 10;       //list[0]에 10할당
    list[1] = 11;       //list[1]에 11할당
    plist[0] = (int*)malloc(sizeof(int));   //plist[0]에 4바이트 크기만큼의 int형 메모리 할당받음

    printf("list[0] \t= %d\n", list[0]);                //list[0]값 출력, 10이나옴
    printf("address of list \t= %p\n", list);           //list주소값 출력, 0061FF0C나옴
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]의 주소 출력, 0061FF0C가 나옴
    printf("address of list + 0 \t= %p\n", list+0);     //list+0의 값 출력, 0061FF0C가 나옴
    printf("address of list + 1 \t= %p\n", list+1);     //list+1의 값 출력, 0061FF10이 나옴
    printf("address of list + 2 \t= %p\n", list+2);     //list+2의 값 출력, 0061FF14이 나옴
    printf("address of list + 3 \t= %p\n", list+3);     //list+3의 값 출력, 0061FF18이 나옴
    printf("address of list + 4 \t= %p\n", list+4);     //list+4의 값 출력, 0061FF1C이 나옴
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]의 주소값 출력, 0061FF1C가 나옴

    printf("[----- [Cho Joon Hee] [2017038076] -----]");

    free(plist[0]);
}