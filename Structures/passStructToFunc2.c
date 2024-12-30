//passing structure to function using pass by value

#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function that receives a structure by reference
void updateDate(Date *d) {
    d->day = 25;  //Method 1
    d->month = 12;
    (*d).year = 2024; //Method 2
}

int main() {
    Date today = {24, 8, 2024};
    updateDate(&today);  // Passing the structure by reference
    printf("Updated Date: %d/%d/%d\n", today.day, today.month, today.year);
    return 0;
}
