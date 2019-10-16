//
// Created by wuping on 2019/2/24.
// 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target);

main() {
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *result = twoSum(nums, 10, 11);
    printf("result : %d %d \n", result[0], result[1]);
}

int *twoSum(int *nums, int numsSize, int target) {
    int *result = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    free(result);
    return 0;
}