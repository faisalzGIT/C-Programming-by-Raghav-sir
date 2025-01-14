#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);  // Compare strings lexicographically
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);  // Compare strings in reverse lexicographical order
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count_a = 0, count_b = 0;
    int freq_a[26] = {0}, freq_b[26] = {0};

    // Count distinct characters in string 'a'
    for (int i = 0; a[i] != '\0'; i++) {
        if (freq_a[a[i] - 'a'] == 0) {
            count_a++;
            freq_a[a[i] - 'a'] = 1;
        }
    }

    // Count distinct characters in string 'b'
    for (int i = 0; b[i] != '\0'; i++) {
        if (freq_b[b[i] - 'a'] == 0) {
            count_b++;
            freq_b[b[i] - 'a'] = 1;
        }
    }

    // If counts are equal, sort lexicographically
    if (count_a == count_b) {
        return strcmp(a, b);
    } else {
        return count_a - count_b;  // Sort by number of distinct characters
    }
}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    // If lengths are equal, sort lexicographically
    if (len_a == len_b) {
        return strcmp(a, b);
    } else {
        return len_a - len_b;  // Sort by length
    }
}

// Sorting function that accepts a custom comparison function
void string_sort(char** arr, int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (cmp_func(arr[i], arr[j]) > 0) {
                // Swap arr[i] and arr[j] if comparison shows arr[i] is "greater"
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Allocate memory for an array of n strings
    char** arr = (char**)malloc(n * sizeof(char*));

    // Read n strings from input
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(1024 * sizeof(char));  // Allocate space for each string
        scanf("%s", arr[i]);  // Read string
        arr[i] = realloc(arr[i], strlen(arr[i]) + 1);  // Resize to fit the string
    }

    // Sort and print using different sorting strategies
    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}
