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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || n<1) return head;
        ListNode* temp=head;
        int count=0;
        while(temp !=NULL){
            temp=temp->next;
            count++;
        }

        if(n==count){
            ListNode* newNode= head->next;
            delete head;
            return newNode;
        }
        
        int toDelete = count-n;
        temp=head;

        for(int i=1;i<toDelete;i++){
            temp=temp->next;
        }
        ListNode* det=temp->next;
        temp->next=det->next;
        delete det;
        
        return head;

    }
};