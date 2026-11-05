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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> ans;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while (temp1 != NULL) {
            ans.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            ans.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(ans.begin(), ans.end());
        return arrayToLinkedList(ans);
    }
};