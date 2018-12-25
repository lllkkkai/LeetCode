/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ret;
    if(l1 == NULL)    return l2;    //如果链表l1是空链表，直接返回链表l2；
    if(l2 == NULL)    return l1;    //如果链表l2是空链表，直接返回链表l1；
    
    if(l1->val> l2->val){          //比较两组链表最小值域；
        ret = l2;                  //因为l2值域值更小，所以链接在ret末端；
        ret ->next = mergeTwoLists(l1, l2->next);   //此处用到了递归；
        return ret;
    }else{
        ret = l1;                   //因为l1值域值更小，所以链接在ret末端；
        ret ->next = mergeTwoLists(l1->next, l2);   //此处用到了递归；
        return ret;
    }
}