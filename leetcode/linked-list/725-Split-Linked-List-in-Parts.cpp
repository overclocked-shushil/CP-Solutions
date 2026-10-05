class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode * temp = head;
        int len = 0;
        while ( temp != NULL){
            len ++;
            temp = temp ->next;
        }
        vector <ListNode*> store (k);
        int split = len /k;
        int rem = len %k;
        ListNode * current = head;
        for (int i = 0 ;i<k;i++){
            ListNode newpart(0);
            ListNode * tail = &newpart;
            int currentlen = split;
            if (rem >0){
                rem --;
                currentlen ++;
            }
            for (int j =0 ;j<currentlen;j++){
                tail ->next = new ListNode (current ->val);
                tail = tail ->next;
                current = current ->next;
            }
            store[i] = newpart.next;
        }
        return store;
    }
};