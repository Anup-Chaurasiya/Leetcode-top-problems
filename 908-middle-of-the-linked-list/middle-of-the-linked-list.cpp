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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* middle=head;
        if(head==NULL){
            return NULL;
        }
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int start=0;
        while(start<count/2){
            middle=middle->next;
            start++;
        }

        return middle ;

    }
};