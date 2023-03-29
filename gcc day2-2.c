#include <stdio.h>

int main() {
    int a[10] = {1, 5, 3, 4, 2, 6, 9, 8, 7, 10};
    int n = 10; // number of elements in the array
    int max = a[0]; // assume the first element is the maximum
    int min = a[0]; // assume the first element is the minimum
    
    // iterate through the array and update max and min
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    
    printf("Largest number in the array is: %d\n", max);
    printf("Smallest number in the array is: %d\n", min);
    
    return 0;
}

