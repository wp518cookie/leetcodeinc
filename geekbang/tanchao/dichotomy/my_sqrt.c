//
// Created by wuping on 2019-07-02.
//

// https://leetcode.com/problems/sqrtx/submissions/

int mySqrt(int x) {
    int start = 0;
    int end = x;
    while (start < end) {
        long mid = start + ((end - start) >> 1);
        long val = mid * mid;
        if (val < x) {
            if ((mid + 1) * (mid + 1) > x) {
                return (int) mid;
            } else {
                start = mid + 1;
            }
        } else if (val > x) {
            end = mid - 1;
        } else {
            return (int) mid;
        }
    }
    return (int) start;
}

int main() {
    int result = mySqrt(8);
}