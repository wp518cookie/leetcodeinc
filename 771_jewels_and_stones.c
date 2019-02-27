//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>
#include <string.h>

int numJewelInStones(char *J, char *S);

int size(char *i);

int main() {
    char a[40] = "aA";
    char b[40] = "aAAbbbb";
//    printf("%d \n ", strlen(a));
//    size(a);
//    size(b);
    int s1 = numJewelInStones(a, b);
    printf("result : %d \n", s1);
//    int t = 'a';
//    printf("%d \n", t);
}

int size(char *a) {
    printf("%d \n", strlen(a));
}

int numJewelInStones(char *J, char *S) {
    if (J == NULL || S == NULL) {
        return 0;
    }
    int J_C[128] = {0};
    for (int i = 0; *(J + i) != '\0'; i++) {
        int t = *(J + i);
        J_C[t] = 1;
    }
    int count = 0;
    for (int i = 0; *(S + i) != '\0'; i++) {
        int t = *(S + i);
        if (J_C[t] == 1) {
            count++;
        }
    }
    return count;
}