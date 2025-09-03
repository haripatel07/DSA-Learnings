/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* reverse(Node* head) {
        if (!head || !head->next) return head;  

        Node* curr = head;
        Node* prev = nullptr;

        while (curr) {
            Node* temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            prev = curr;
            curr = curr->prev;
        }

        return prev;
    }
};
