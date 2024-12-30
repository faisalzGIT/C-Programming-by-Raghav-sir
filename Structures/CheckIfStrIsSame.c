#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollno;
    char dept[50];
    char course[50];
    int joinedSince;
} Student;

void check(Student pehla, Student dusra) {
    if (strcmp(pehla.dept, dusra.dept) == 0) {
        printf("Department same hai\n");
    } else {
        printf("Department same nahi hai\n");
    }
}

int main() {
    Student chatr1;
    strcpy(chatr1.name, "M Faisal");
    chatr1.rollno = 1;
    strcpy(chatr1.dept, "Engineering");
    strcpy(chatr1.course, "BCA");
    chatr1.joinedSince = 2023;

    Student chatr2;
    strcpy(chatr2.name, "M Khan");
    chatr2.rollno = 2;
    strcpy(chatr2.dept, "Engineering");
    strcpy(chatr2.course, "BCA");
    chatr2.joinedSince = 2023;

    check(chatr1, chatr2);

    return 0;
}
