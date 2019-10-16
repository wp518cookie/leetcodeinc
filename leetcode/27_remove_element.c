//
// Created by wuping on 2019/2/28.
//

int removeElement(int *nums, int numsSize, int val);

int main() {

}

int removeElement(int *nums, int numsSize, int val) {
    int idx = 0;
    int size = numsSize;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            size--;
        } else {
            nums[idx] = nums[i];
            idx++;
        }
    }
    return size;
}