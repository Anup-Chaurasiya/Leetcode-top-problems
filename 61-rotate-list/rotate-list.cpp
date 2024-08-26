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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;

        ListNode*temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }

        int loop=k % size;
        if(size==1 || loop==0) return head;

        loop = size - loop ;
        temp=head;
        int count=0;
        while(count<loop-1){
            temp=temp->next;
            count++;
        }
        ListNode *rotate=temp->next;
        temp->next=NULL;
        ListNode*first=rotate;
        while(rotate->next!=NULL){
            rotate=rotate->next;
        }
        rotate->next=head;

        return first;

    }
};