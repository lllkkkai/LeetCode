/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
        int lenth, i;
        struct ListNode *point1, *point2, *point3;
        point3 = point2 = head;
        point1 = NULL;
        lenth = 0;
        if(head == NULL || head->next == NULL)
            return true;
        while(point3 != NULL)//get list length
        {
            point3 = point3->next;
            lenth++;
        }
        for(i = 0;i < (lenth / 2);i++)
        {
            point3 = point2->next;
            point2->next = point1;
            point1 = point2;
            point2 = point3;
        }
        if((lenth % 2) == 1)
            point3 = point3->next;
        while(point3 != NULL && point1 != NULL)
        {
            if(point3->val != point1->val)
                return false;
            point3 = point3->next;
            point1 = point1->next;
        }
        return true;
}