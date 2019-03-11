//
// Created by wuping on 2019/3/1.
//

/**
 * https://leetcode-cn.com/explore/interview/card/top-interview-quesitons-in-2018/261/before-you-start/1106/
 * 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
 * 说明：
 * 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
 * 输入: [2,2,1]
 * 输出: 1
 * @return
 */
int main() {

}

int singleNumber(int *nums, int numsSize) {
    if (numsSize == 1) {
        return nums[0];
    }
    for (int i = 1; i < numsSize; i++) {
        nums[0] = nums[0] ^ nums[i];
    }
    return nums[0];
}