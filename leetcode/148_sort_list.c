//
// Created by wuping on 2019-10-16.
//
// https://leetcode.com/problems/reverse-linked-list-ii/
//
//Input: 1->2->3->4->5->NULL, m = 2, n = 4
//Output: 1->4->3->2->5->NULL

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *reverseBetween(struct ListNode *head, int m, int n) {
    if (m == n) {
        return head;
    }
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *mark = dummy;
    struct ListNode *pre = dummy;
    struct ListNode *cur = head;
    int count = 1;
    while (count <= m) {
        if (count == m - 1) {
            mark = cur;
        }
        pre = cur;
        cur = cur->next;
        count++;
    }
    while (count <= n) {
        pre->next = cur->next;
        cur->next = mark->next;
        mark->next = cur;
        cur = pre->next;
        count++;
    }
    return dummy->next;
}