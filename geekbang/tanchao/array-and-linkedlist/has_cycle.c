//
// Created by wuping on 2019-05-10.
//

struct ListNode {
    in val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (head == 0) {
        return false;
    }
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    do {
        if (fast->next == 0) {
            return false;
        }
        if (fast->next->next == 0) {
            return false;
        }
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);
    return true;
}