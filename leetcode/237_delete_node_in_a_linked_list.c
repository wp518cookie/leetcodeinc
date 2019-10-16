//
// Created by wuping on 2019/2/28.
//
struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode *node);

int main() {

}

void deleteNode(struct ListNode *node) {
    /**
     *  *node = *(node->next);
     */
    if (node == NULL) {
        return;
    }
    if (node + 1 == NULL) {
        node = NULL;
    }
    struct ListNode *nextNode = node->next;
    node->val = nextNode->val;
    node->next = nextNode->next;
    return;
}