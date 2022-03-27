#include <stdio.h>
void print1 (int *ptr, int rows);   //print1함수 프로토타입

int main()
{
    int one[] = {0, 1, 2, 3, 4};        //int형 배열 one선언 후 초기화

    printf("one = %p\n", one);          //one의 값 출력, 0061FF0C이 나옴
    printf("&one = %p\n", &one);        //one의 주소 출력, 0061FF0C이 나옴
    printf("&one[0] = %p\n", &one[0]);  //one[0]의 주소 출력, 0061FF0C이 나옴
    printf("\n");
    print1(&one[0], 5);                 //print1함수 호출
    
    printf("[----- [Cho Joon Hee] [2017038076] -----]");
    
    return 0;
}

void print1 (int *ptr, int rows)
{
    int i;

    printf ("Address \t Contents\n");   
    for (i = 0; i < rows; i++)              //rows만큼 돌면서 ptr+i의 값과 ptr+i의 값을 역참조하여 출력
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
}