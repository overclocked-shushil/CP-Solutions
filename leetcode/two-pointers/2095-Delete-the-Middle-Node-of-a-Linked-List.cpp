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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        int middle = (size / 2) + 1;
        int count = 0;
        temp = head;
        while (temp != NULL) {
            count++;
            if (count == middle -1){
                temp ->next = temp ->next ->next;
                break;
            }
            temp = temp->next;
        }
        temp = head;
        return head;
        
    }
};