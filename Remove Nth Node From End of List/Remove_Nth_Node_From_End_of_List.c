/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
        if(head == NULL || head->next == NULL)
            return NULL;
            
        struct ListNode* faster = head;
        struct ListNode* slower = head;
        
        for(int i = 0; i<n; i++)
            faster = faster->next;
            
        if(faster == NULL){
            head = head->next;
            return head;
        }
        
        while(faster->next != NULL){
            slower = slower->next;
            faster = faster->next;
        }
        
        slower->next = slower->next->next;
        return head;
}