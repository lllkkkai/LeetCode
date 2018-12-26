/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *pNodeNext = node->next;

    node->val = pNodeNext->val;
    node->next = pNodeNext->next;

    free(pNodeNext);
}