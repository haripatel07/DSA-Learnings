/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if (!head || !head->next) return head;
        int count[3] = {0, 0, 0};
        Node* curr = head;
    
        while (curr) {
            count[curr->data]++;
            curr = curr->next;
        }
    
        curr = head;
        int i = 0;
        while (curr) {
            if (count[i] == 0) i++;
            else {
                curr->data = i;
                count[i]--;
                curr = curr->next;
            }
        }
        return head;
    }
};