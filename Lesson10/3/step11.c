#include <stdio.h>

void sort_arr(int arr[], int n, int fl);

int main() {
    int n, fl;
    scanf("%d", &n);
    int arr[n + 2];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &fl);
    sort_arr(arr, n, fl);
    return 0;
}

void sort_arr(int arr[], int n, int fl) {
    if (fl == 0) {
        int save;
        for (int i = 0; i < n; i++) {
            int min = arr[i]; 
            int f = i;
            save = arr[i];
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < min) {
                    min = arr[j];
                    f = j;
                }
            }
            arr[i] = min;
            arr[f] = save;
        }
    } else if (fl == 1) {
        int save;
        for (int i = 0; i < n; i++) {
            int max = arr[i];
            int f = i;
            save = arr[i];
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > max) {
                    max = arr[j];
                    f = j;
                }
            }
            arr[i] = max;
            arr[f] = save;
        }
    }
}