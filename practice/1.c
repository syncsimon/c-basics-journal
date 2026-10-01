#include <stdio.h>

int main() {
    int arr[] = {7, 4, 3, 12, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            for (int k = j + 1; k < n; k++) {

                if (arr[i] % 2 == 0 &&
                    arr[j] % 2 != 0 &&
                    arr[k] == arr[i] * arr[j]) {

                    found = 1;
                    break;
                }
            }

            if (found == 1) {
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 1) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}