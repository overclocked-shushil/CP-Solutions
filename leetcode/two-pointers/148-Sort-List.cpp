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
    ListNode* arrayToLinkedList(const vector<int>& arr) {
        if (arr.empty())
            return nullptr;

        ListNode* head = new ListNode(arr[0]);
        ListNode* current = head;

        for (size_t i = 1; i < arr.size(); i++) {
            current->next = new ListNode(arr[i]);
            current = current->next;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        ListNode * temp = head;
        vector<int> ans;
        while (temp != NULL){
            ans.push_back(temp->val);
            temp = temp ->next;
        }
        sort(ans.begin(),ans.end());
        return arrayToLinkedList(ans);
    }
};