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
        if(head==NULL || head->next==NULL) return NULL;
        int count=0;
        ListNode * temp=head;
        
        ListNode * tail=head;
        
        while(tail!=NULL){
            count++;
            tail=tail->next;
        }

        if(n==count){
            ListNode*first=head;
            head=head->next;
            delete first;
            return head;
        }

        int s=0;
        int diff=count-n;
        while(s<diff-1){
            temp=temp->next;
            s++;
        }
        ListNode*del=temp->next;
        temp->next=del->next;
        delete del;

        return head;
    }
};