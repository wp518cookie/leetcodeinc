//
// Created by wuping on 2019-05-13.
//

struct ListNode {
    int val;
    struct ListNode *next;
};

int check(struct ListNode *h, int k) {
    while (k--) {
        if (h == 0) {
            return 0;
        }
        h = h->next;
    }
    return 1;
}

struct ListNode *reverseKGroup(struct ListNode *head, int k) {
    if (head == 0 || head->next == 0) {
        return head;
    }
    struct ListNode dummyNode = {};
    struct ListNode *dummy = &dummyNode;
    dummy->next = head;
    struct ListNode *pre = dummy;
    struct ListNode *cur = cur;
    struct ListNode *first;
    struct ListNode *next;
    while (1) {
        int t = k;
        if (!check(cur, k)) {
            return dummy->next;
        }
        t--;
        first = cur;
        cur = cur->next;
        while (t-- > 0) {
            next = cur->next;
            cur->next = pre->next;
            first->next = next;
            pre->next = cur;
            cur = next;
        }
        pre = first;
    }
}

int main() {
    struct ListNode l1 = {1};
    struct ListNode l2 = {2};
    struct ListNode l3 = {3};
    struct ListNode l4 = {4};
    struct ListNode l5 = {5};
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5;
    struct ListNode* result = reverseKGroup(&l1, 2);
}