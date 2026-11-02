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
        if(!head){
            return nullptr;
        }
        /* if(head && !(head -> next)){
            return new Node(head -> val);
        }*/
        Node* temp = head;
        Node* head2 = new Node(head->val);
        Node* temp2 = head2;
        unordered_map<Node*,Node*> hashmap;
        hashmap[head] = head2;
        while(temp->next!=nullptr){
            temp = temp -> next;
            Node* newnode = new Node(temp->val);
            temp2 -> next = newnode;
            temp2 = newnode;
            hashmap[temp] = temp2; 
        }
        temp = head;
        temp2 = head2;
        while(temp2){
            temp2 -> random = hashmap[temp -> random];
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        return head2;
    }
};
