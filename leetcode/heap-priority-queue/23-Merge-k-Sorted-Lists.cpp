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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for (ListNode* head : lists) {
            ListNode* temp = head;
            while (temp != NULL) {
                ans.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(ans.begin(), ans.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for (int x : ans) {
            temp->next = new ListNode(x);
            temp = temp->next;
        }
        return dummy->next;
    }
};