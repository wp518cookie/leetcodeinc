//
// Created by wuping on 2019-10-16.
//

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *partition(struct ListNode *head, int x) {
    struct ListNode *firstNode = malloc(sizeof(struct ListNode));
    struct ListNode *secondNode = malloc(sizeof(struct ListNode));
    firstNode->val = -1;
    secondNode->val = -1;
    struct ListNode *fNode = firstNode;
    struct ListNode *sNode = secondNode;
    struct ListNode *cur = head;
    while (cur != NULL) {
        if (cur->val < x) {
            struct ListNode *tmp = cur->next;
            fNode->next = cur;
            fNode = fNode->next;
            cur = tmp;
        } else {
            struct ListNode *tmp = cur->next;
            sNode->next = cur;
            sNode = sNode->next;
            cur = tmp;
        }
    }
    sNode->next = NULL;
    fNode->next = secondNode->next;
    return firstNode->next;
}