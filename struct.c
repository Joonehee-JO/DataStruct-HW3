#include <stdio.h>

struct student1 {       //student1구조체 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct {        //typedef로 student2구조체 선언
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'};          //student1구조체 변수 st1선언

    printf("st1.lastName = %c\n", st1.lastName);    //st1의 lastName출력, A가 나옴
    printf("st1.studentId = %d\n", st1.studentId);  //st1의 studentId출력,100이 나옴
    printf("st1.grade = %c\n", st1.grade);          //st1의 grade출력, A가 나옴

    student2 st2 = {'B', 200, 'B'};                 //typedef로 선언해줬기에 struct키워드 없이 선언

    printf("\nst2.lastName = %c\n", st2.lastName);  //st2의 lastname출력, B가 나옴
    printf("st2.studentId = %d\n", st2.studentId);  //st2의 studentId출력, 200이 나옴
    printf("st2.grade = %c\n", st2.grade);          //st2의 grade출력, B가 나옴

    student2 st3;                                   //st3선언
    st3 = st2;                                      //st2의 값을 st3에 덮어씀

    printf("\nst3.lastName = %c\n", st3.lastName);  //st3의 lastName출력, B가 나옴
    printf("st3.studentId = %d\n", st3.studentId);  //st3의 studentId출력, 200이 나옴
    printf("st3.grade = %c\n", st3.grade);          //st3의 grade출력, B가 나옴

    printf("[----- [Cho Joon Hee] [2017038076] -----]");

/*
    if(st3 == st2)   //지원안함
        printf("equal\n");
    else
        printf("not equal\n"); 
*/
    return 0;
}