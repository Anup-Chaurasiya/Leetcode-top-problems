/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode * reverseK(ListNode * & head, int k){
       
        if(head==NULL) return NULL;

        int count = 0 ;
        ListNode * pre =NULL;
        ListNode * next=NULL;
        ListNode *curr = head;
        
         ListNode* check = head;
        for (int i = 0; i < k; i++) {
            if (!check) return head; // Not enough nodes to reverse, return the head as it is
            check = check->next;
        }
        
        while(curr && count < k){
            next = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = next;
            count++;
        }
        if(next!=NULL){
        head->next = reverseK(next,k);      
        }        

        return pre;
     }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        return reverseK(head,k);

    }
};