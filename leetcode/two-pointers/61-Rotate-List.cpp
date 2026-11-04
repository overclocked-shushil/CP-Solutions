class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 0;

        while (temp != NULL) {
            count++;
            prev = temp;
            temp = temp->next;
        }

        k = k % count;

        if (k == 0)
            return head;

        prev->next = head;

        temp = head;
        prev = NULL;

        while (count - k > 0) {
            prev = temp;
            temp = temp->next;
            count--;
        }

        prev->next = NULL;

        return temp;
    }
};