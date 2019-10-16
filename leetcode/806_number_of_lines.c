//
// Created by wuping on 2019/2/25.
// https://leetcode-cn.com/problems/number-of-lines-to-write-string/
//
int *numberOfLines(int *widths, int widthsSize, char *S, int *returnSize);

int *numberOfLines(int *widths, int widthsSize, char *S, int *returnSize) {
    int line = 1;
    int usedWidth = 0;
    int size = sizeof(S);
    for (int i = 0; i < size; i++) {
        char c = S[i];
        int needWidth = widths[(int) c];
        if (usedWidth + needWidth > widthsSize) {
            line++;
            usedWidth = needWidth;
        } else {
            usedWidth += needWidth;
        }
    }
    returnSize[0] = line;
    returnSize[1] = usedWidth;
    return returnSize;
}