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
        ListNode *tempp = head;
        int total = 0;
        while (tempp != NULL){
            total++;
            tempp = tempp ->next;
        }
        int k = total - n;
        int count = 0;
        if (head == NULL ) return NULL;
        if (k == 0){
            ListNode * temp = head;
            head = head -> next;
            delete temp;
            return head;
        }
        ListNode* temp = head;
        for (int i = 0;i<k-1 && temp != NULL ; i++){
            temp = temp -> next;
        }
        if (temp == NULL || temp->next ==NULL) return head;
        ListNode * del = temp->next;
        temp -> next = temp -> next -> next;
        delete del;
        return head;
    }
};