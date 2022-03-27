#include <stdio.h>
#define MAX_SIZE 100

float sum(float [], int);       //sum함수 프로토타입
float input[MAX_SIZE], answer;  //전역변수 선언
int i;                          

void main(void)
{
    for(i=0; i < MAX_SIZE; i++)         //0부터 MAX_SIZE만큼 1씩늘어나며 각 index에 할당
        input[i] = i;

    printf("address of input = %p\n", input);   //배열주소 출력, 004070A0이 나옴
    answer = sum(input, MAX_SIZE);              //sum함수호출
    printf("The sum is: %f\n", answer);         //리턴값 출력
    printf("[----- [Cho Joon Hee] [2017038076] -----]");
}
    
float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       //list의 값  출력, 004070A0이 나옴
    printf("address of list = %p\n\n", &list);  //list의 실제 주소 출력, 0061FF00이 나옴 
    int i;
    float tempsum = 0;

    for(i = 0; i < n; i++)  //배열 사이즈만큼 돌면서 tempsum에 값을 계속 더해감
        tempsum += list[i];

    return tempsum;         //tempsum 리턴
}