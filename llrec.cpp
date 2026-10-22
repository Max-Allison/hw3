#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {
    if (head == NULL) {
        smaller = NULL;
        larger = NULL;
        return;
    }

    Node* current = head;
    head = head->next;

    if (current->val <= pivot) {
        smaller = current;
        llpivot(head, smaller->next, larger, pivot);
    }
    if (current->val > pivot) {
        larger = current;
        llpivot(head, smaller, larger->next, pivot);
    }
    
}

