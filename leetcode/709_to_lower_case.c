//
// Created by wuping on 2019/2/27.
//

char *toLowerCase(char *str) {
    if (str == NULL) {
        return str;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}