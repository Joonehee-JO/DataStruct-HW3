#include <stdio.h>

struct student {        //student 구조체 선언
    char lastName[13];
    int studentId; 
    short grade; 
};

int main()
{
    struct student pst; //구조체변수 pst선언

    printf("size of student = %ld\n", sizeof(struct student));  //구조체의 사이즈 출력, 19바이트로 계산되지만 컴파일러가 패딩처리를 해줘서 24바이트가 나옴
    printf("size of int = %ld\n", sizeof(int));                 //int의 사이즈 출력, 4바이트가 나옴
    printf("size of short = %ld\n", sizeof(short));             //short의 사이즈 출력, 2바이트가 나옴
    
    printf("[----- [Cho Joon Hee] [2017038076] -----]");

    return 0;
}