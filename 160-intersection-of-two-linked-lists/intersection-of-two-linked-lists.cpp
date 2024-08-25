/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * head1 = headA;
        ListNode* head2=headB;
        int a=0,b=0;
         
        while(head1){
            a++;
            head1=head1->next;
        }
         while(head2){
            b++;
            head2=head2->next;
        }
        int diff= abs(a-b);
        if(a>b){
            while(diff--)
            headA=headA->next;
        }
        else {
            while(diff--)
            headB=headB->next;
        }

        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }

        return NULL;
    }
};