#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head = nullptr;

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        Node* current = head;

        if (head == NULL) {
            head = newNode;
            return;
        }

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newNode;
    }

    int getLastValue() {
        if (head == NULL) {
            return -1;
        }

        Node* current = head;

        while (current->next != NULL) {
            current = current->next;
        }

        return current->value;
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList* list = new LinkedList();

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list->insertAtEnd(x);
        cout << list->getLastValue() << ' ';
    }
}