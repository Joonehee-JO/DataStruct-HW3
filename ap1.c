#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];                //int를 담을 배열 
    int *plist[5] = {NULL,};    //int형 포인트 배열

    plist[0] = (int *)malloc(sizeof(int));  //힙영역 4바이트만큼 할당받음

    list[0] = 1;                //배열 0번째 인덱스 1로 초기화
    list[1] = 100;              //배열 1번째 인덱스에 100으로 초기화

    *plist[0] = 200;            //할당받은 공간에 200을 저장

    printf("value of list[0] = %d\n", list[0]);         //0번째 index값 1이 나옴
    printf("address of list[0] = %p\n", &list[0]);      //0번째 index의 주소, 0061FF0C가 나옴
    printf("value of list = %p\n", list);               //list의 값출력, 0061FF0C가 나옴
    printf("address of list (&list) = %p\n", &list);    //list의 주소출력, 배열의 시작주소 0061FF0C가 나옴

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]);         //1번째 index값 100이 나옴
    printf("address of list[1] = %p\n", &list[1]);      //1번째 index의 주소, 0061FF10이 나옴
    printf("value of *(list+1) = %d\n", *(list + 1));   //list에 1을 더한후 역참조하여 값 출력, 포인터산술연산에 의해 1번째 index의 값 100이나옴
    printf("address of list+1 = %p\n", list+1);         //list+1의 주소 출력, 1번째 index주소 0061FF10이 나옴

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);     //plist 0번째 index의 값 역참조하여 출력, 200이 나옴
    printf("&plist[0]          = %p\n", &plist[0]);     //plist[0]의 주소 출력, 0061FEF8이 나옴
    printf("&plist             = %p\n", &plist);        //plist의 주소 출력, 0061FEF8이 나옴
    printf("plist              = %p\n", plist);         //plist의 값 출력, 0061FEF8이 나옴
    printf("plist[0]           = %p\n", plist[0]);      //plist[0]의 값 출력, 00682FC8이 나옴(할당받은 메모리주소)
    printf("plist[1]           = %p\n", plist[1]);      //plist[1]의 값 출력, 00000000이 나옴
    printf("plist[2]           = %p\n", plist[2]);      //plist[2]의 값 출력, 00000000이 나옴
    printf("plist[3]           = %p\n", plist[3]);      //plist[3]의 값 출력, 00000000이 나옴
    printf("plist[4]           = %p\n", plist[4]);      //plist[4]의 값 출력, 00000000이 나옴
    
    printf("[----- [Cho Joon Hee] [2017038076] -----]");

    free(plist[0]);                                     //할당받은 공간 해제
}