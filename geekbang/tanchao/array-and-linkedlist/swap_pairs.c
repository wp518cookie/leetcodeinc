//
// Created by wuping on 2019-04-22.
//

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *swapPairs(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *dummy = {};
    dummy -> next = head;
    struct ListNode *prev = dummy;
    struct ListNode *cur = head;
    struct ListNode *next;
    while (cur != NULL && cur->next != NULL) {
        next = cur->next->next;
        cur->next->next = cur;
        prev->next = cur->next;
        cur->next = next;
        prev = cur;
        cur = next;
    }
    return dummy->next;
}
