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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> nums;
        while(temp){
            nums.push_back(temp->val);
            temp = temp -> next;
        }
        temp = head;
        int i = 0;
        int j = nums.size() - 1;
        int k = 0;
        while(temp){
            if(k%2 == 0){
                temp -> val = nums[i];
                i++;
            }
            else{
                temp -> val = nums[j];
                j--;
            }
            temp = temp -> next;
            k++;
        }
    }
};
