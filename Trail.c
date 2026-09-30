#include <stdio.h>

struct Student {
    int age;
    float marks;
};

int main() {

    struct Student s1;

    s1.age = 18;
    s1.marks = 85.5;

    struct Student *p = &s1;

    printf("%d\n", s1.age);
    printf("%.1f\n", s1.marks);

    ;

    printf("%d\n", s1.age);

    return 0;
}