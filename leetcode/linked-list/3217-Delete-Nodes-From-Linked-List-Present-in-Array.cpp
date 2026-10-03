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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set <int> st(nums.begin(),nums.end());
        while (head != nullptr && st.count(head -> val) >0){
            head = head ->next;
            
        }
        if (head == nullptr){
            return nullptr;
        }
        ListNode * temp = head;
        while (temp ->next != nullptr){
            if (st.count(temp ->next ->val)>0){
                temp -> next = temp ->next -> next;
            }
            else temp = temp -> next;
        }
        return head;
    }
};