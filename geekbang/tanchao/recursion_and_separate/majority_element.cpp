//
// Created by wuping on 2019-05-31.
//

int majorityElement(int* nums, int numsSize){
    int result = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++) {
        int val = nums[i];
        if (result == val) {
            count++;
        } else {
            count--;
            if (count < 0) {
                result = val;
                count = 1;
            }
        }
    }
    return result;
}