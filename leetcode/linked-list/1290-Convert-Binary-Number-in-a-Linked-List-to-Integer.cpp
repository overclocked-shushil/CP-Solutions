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
    int getDecimalValue(ListNode* head) {
        int len = 0;
        ListNode * temp = head;
        vector <int> ans;
        while (temp != NULL){
            len++;
            ans.push_back(temp->val);
            temp = temp ->next;
        }
        int res = 0;
        reverse(ans.begin(),ans.end());
        for (int i = 0 ;i<len;i++){
            res += ans[i]* pow(2,i);
        }
        return res;
    }

};