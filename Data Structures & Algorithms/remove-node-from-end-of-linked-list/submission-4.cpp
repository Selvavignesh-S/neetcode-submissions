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
        if(!head){
            return nullptr;
        }
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* temp = head;
        int count = 1;
        while(temp->next){
            temp = temp -> next;
            count++;
        }
        int nth_node = count - n;
        temp = head;
        ListNode* prev = dummy;
        while(nth_node > 0){
            prev = temp;
            temp = temp -> next;
            nth_node--;
        }
        ListNode* deleted = temp;
        prev -> next = temp -> next;
        delete deleted;
        ListNode* ans = dummy -> next;
        delete dummy;
        return ans;
    }
};
