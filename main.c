/*
Coding Challenge: The Lucky Integer

Find the number in the array that occurs exactly as many times as its
numerical value. Return the largest one if multiple exists.

Sample input:
[2, 2, 3, 4]

Sample output: 2

Sample input:
[1, 2, 2, 3, 3, 3]

Sample output: 3
*/

#include <stdio.h>

int findLucky(int arr[], int size) {
    int lucky = -1;

    for (int i = 0; i < size; i++) {

        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count == arr[i] && arr[i] > lucky) {
            lucky = arr[i];
        }
    }

    return lucky;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findLucky(arr, size);

    printf("%d\n", result);

    return 0;
}
