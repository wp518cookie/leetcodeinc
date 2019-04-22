//
// Created by wuping on 2019/4/10.
//
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char *s);

int main() {
    char *s = "hello, world";
    isPalindrome(s);
}

bool isPalindrome(char *s) {
    int len = strlen(s);
    printf("%d", len);
}