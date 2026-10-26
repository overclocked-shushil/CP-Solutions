class Solution {
public:
    Node *addOne(Node *head) {
        if (head == NULL) return new Node(1); 
        Node *temp = head;
        Node *lastnotnine = NULL;
        while (temp != NULL){
            if (temp -> data != 9) lastnotnine = temp;
            temp = temp ->next;
        }
         if (lastnotnine == NULL) {
            Node* newHead = new Node(1);
            newHead->next = head;
            temp = head;
            while (temp != NULL) {
                temp->data = 0;
                temp = temp->next;
            }
            return newHead;
        }

        lastnotnine->data++;

        temp = lastnotnine->next;

        while (temp != NULL) {

            temp->data = 0;

            temp = temp->next;

        }
        return head;
    }
};