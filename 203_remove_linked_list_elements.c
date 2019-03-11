//
// Created by wuping on 2019/2/28.
//
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val);

int main() {
    struct ListNode t1;
    struct ListNode t2;
    struct ListNode t3;
    struct ListNode t4;
    t1.val = 1;
    t2.val = 2;
    t3.val = 3;
    t4.val = 4;
    t1.next = &t2;
    t2.next = &t3;
    t3.next = &t4;
    removeElements(&t1, 3);
}

struct ListNode *removeElements(struct ListNode *head, int val) {
    if (head == NULL) {
        return NULL;
    }
    struct ListNode dummy;
    dummy.val = -1;
    dummy.next = head;

    struct ListNode *pre = &dummy;
    struct ListNode *cur = head;
    while (cur != NULL) {
        int comparedVal = (*cur).val;
        if (comparedVal == val) {
            pre->next = cur->next;
            cur = cur->next;
        } else {
            pre = cur;
            cur = cur->next;
        }
    }
    return dummy.next;
}