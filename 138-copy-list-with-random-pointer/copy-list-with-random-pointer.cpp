/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>mp;
        Node*newnode=new Node(0);
        Node*temp=newnode;
        Node*curr=head;
        while(curr){
            Node*curr_new=new Node(curr->val);
            mp.insert({curr,curr_new});

            temp->next=curr_new;
            temp=curr_new;
            curr=curr->next;

        }

        curr=head;
        Node* newNode=newnode->next;

        while(curr){
            Node*ran=curr->random;
            Node*find=mp[ran];
            newNode->random=find;
            newNode=newNode->next;
            curr=curr->next;

        }

        return newnode->next;        
    }
};