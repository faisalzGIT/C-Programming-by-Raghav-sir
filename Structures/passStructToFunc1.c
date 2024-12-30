//passing structure to function using pass by value

#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function that receives a structure by value
void printDate(Date d) {
    printf("Date: %d/%d/%d\n", d.day, d.month, d.year);
}

int main() {
    Date today = {24, 8, 2024};
    printDate(today);  // Passing the structure by value
    return 0;
}