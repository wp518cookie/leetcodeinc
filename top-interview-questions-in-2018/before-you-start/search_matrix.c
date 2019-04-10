//
// Created by wuping on 2019/3/11.
//

/**
 * 编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。该矩阵具有以下特性：
每行的元素从左到右升序排列。
每列的元素从上到下升序排列。
 [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。
 * @param matrix
 * @param matrixRowSize
 * @param matrixColSize
 * @param target
 * @return
 */
#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int **matrix, int matrixRowSize, int matrixColSize, int target) {
    if (matrix == NULL || matrixRowSize == 0 || matrixColSize == 0) {
        return false;
    }
    int startRow = matrixRowSize - 1;
    int startCol = matrixColSize - 1;
    if (matrix[0][0] > target || matrix[startRow][startCol] < target) {
        return false;
    }
    do {
        if (matrix[startRow][startCol] < target) {
            break;
        } else if (matrix[startRow][startCol] == target) {
            return true;
        } else {
            startRow--;
            startCol--;
        }
    } while (startRow >= 0 && startCol >= 0);
    if (startRow < 0 && startCol >= 0) {
        for (int i = 0; i <= startCol; i++) {
            if (matrix[0][i] == target) {
                return true;
            }
        }
        return false;
    }
    if (startCol < 0 && startRow >= 0) {
        for (int i = 0; i <= startRow; i++) {
            if (matrix[i][0] == target) {
                return true;
            } else if (matrix[i][0] > target) {
                return false;
            }
        }
        return false;
    }
    startRow++;
    startCol++;
    for (int i = 0; i <= startRow; i++) {
        if (matrix[i][startRow] == target) {
            return true;
        } else if (matrix[i][startRow] > target) {
            break;
        }
    }
    for (int i = 0; i <= startCol; i++) {
        if (matrix[startRow][i] == target) {
            return true;
        } else if (matrix[startRow][i] > target) {
            break;
        }
    }
    return false;
}

int main() {
    int s[4][3] = {{4,  7,  11},
                   {7,  11, 16},
                   {10, 11, 20},
                   {13, 13, 22}};
    bool result = searchMatrix((int **)s, 4, 3, 14);
    printf("%d", result);
}

