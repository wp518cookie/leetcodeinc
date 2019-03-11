//
// Created by wuping on 2019/3/1.
//

/**
 * https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1107/
 * 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 你可以假设数组是非空的，并且给定的数组总是存在众数。
 * @return
 */
#include <stdio.h> 

int main() {
    int arr[3] = {3, 2, 3};
    printf("majority element: %d", majorityElement(arr, 3));
}

int majorityElement(int *nums, int numsSize) {
    if (numsSize == 1) {
        nums[0];
    }
    int count = 1;
    int major = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (major == nums[i]) {
            count++;
        } else {
            if (count == 0) {
                major = nums[i];
                count = 1;
            } else {
                count--;
            }
        }
    }
    return major;
}