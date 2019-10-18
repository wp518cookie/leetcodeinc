//
// Created by wuping on 2019-10-18.
//
#include <stdbool.h>

bool uniqueOccurrences(int *arr, int arrSize) {
    int a[2001];
    for (int i = 0; i < 2001; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < arrSize; i++) {
        a[arr[i] + 1000]++;
    }
    int count[1000];
    for (int i = 0; i < 1000; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < 2001; i++) {
        if (count[a[i]] != 0) {
            return false;
        } else {
            if (a[i] > 0) {
                count[a[i]] = 1;
            }
        }
    }
    return true;
}

int main() {
    int t[6] = {1, 2, 2, 1, 1, 3};
    uniqueOccurrences(&t, 6);
}

