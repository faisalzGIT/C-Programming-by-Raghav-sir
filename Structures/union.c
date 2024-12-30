#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;  // Declare a union variable

    // Assign and print integer value
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Assign and print float value
    data.f = 220.5;
    printf("data.f = %.1f\n", data.f);

    // Assign and print string value
    strcpy(data.str, "Hello");
    printf("data.str = %s\n", data.str);

    return 0;
}
