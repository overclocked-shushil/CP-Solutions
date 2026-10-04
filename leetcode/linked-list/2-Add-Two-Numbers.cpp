class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string ans = "";
        string ans1 = "";

        ListNode* temp = l1;
        while (temp != NULL) {
            ans += (temp->val + '0');
            temp = temp->next;
        }
        temp = l2;
        while (temp != NULL) {
            ans1 += (temp->val + '0');
            temp = temp->next;
        }
        string jawab = "";
        int i = 0, j = 0, carry = 0;
        while (i < ans.size() || j < ans1.size() || carry) {
            int sum = carry;
            if (i < ans.size())
                sum += ans[i++] - '0';
            if (j < ans1.size())
                sum += ans1[j++] - '0';
            jawab += (sum % 10) + '0';
            carry = sum / 10;
        }

        ListNode* head = new ListNode(jawab[0] - '0');
        ListNode* prev = head;

        for (int i = 1; i < jawab.size(); i++) {
            ListNode* newNode = new ListNode(jawab[i] - '0');
            prev->next = newNode;
            prev = newNode;
        }

        return head;
    }
};