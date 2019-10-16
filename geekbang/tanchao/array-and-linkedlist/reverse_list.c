//
// Created by wuping on 2019-04-22.
// https://leetcode-cn.com/problems/reverse-linked-list/submissions/
//
struct ListNode {
    in val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *prev = NULL;
    struct ListNode *cur = head;
    struct ListNode *next;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

struct ListNode *reverseListByRecursion(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *p = reverseListByRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return p;
}