//
// Created by wuping on 2019-05-10.
//

struct ListNode {
    in val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    if (head == 0) {
        return 0;
    }
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    do {
        if (fast->next == 0) {
            return 0;
        }
        if (fast->next->next == 0) {
            return 0;
        }
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);
    fast = head;
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    return fast;
}