//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 待优化。。从两边的尾巴开始做比较，更快。。蠢比
 */

int *sortedSquares(int *A, int ASize, int *returnSize) {
    int* b = malloc(ASize * sizeof(int));
    int start = 0;
    for (int i = 0; i < ASize; i++) {
        if (A[i] >= 0) {
            start = i;
            break;
        }
    }
    int lower = start - 1;
    int higher = start;
    int i = 0;
    while (lower >= 0 && higher < ASize) {
        if (A[higher] < -A[lower]) {
            b[i] = A[higher] * A[higher];
            higher++;
        } else {
            b[i] = A[lower] * A[lower];
            lower--;
        }
        i++;
    }
    while (lower >= 0) {
        b[i++] = A[lower] * A[lower];
        lower--;
    }
    while (higher < ASize) {
        b[i++] = A[higher] * A[higher];
        higher++;
    }
    *returnSize = ASize;
    return b;
}

int main(void) {

}