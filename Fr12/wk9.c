// Reversing a linked list Iteratively and Recursively
// Printing out a list 
// Making a list.


#include <stdio.h>
#include <stdlib.h>



// Arrays : -> [1,2,3,4]
// Linked list : -> 
typedef struct node { 
    struct node *next;
    int val;
} Node;

void print_list (Node *curr) { 
    if (curr == NULL) {
        printf("X\n");
        return; // VERY IMPORTANT
    }

    printf("%d -> ", curr->val);
    print_list(curr->next);
}


void free_list (Node *curr) { 
    if (curr != NULL) {
        free(curr);
        free_list(curr->next);
    }
}


Node *reverse_ll_rec (Node *prev, Node* curr) { 
    if (curr == NULL) return prev;
    Node *next_in_seq = curr->next;
    curr->next = prev;
    reverse_ll_rec(curr, next_in_seq);
}

Node *reverse_ll_it (Node *head) { 
    //                P    C    N
    // 0 -> 1 -> 2 -> 3    X
    Node *curr = head;
    Node *prev = NULL;
    Node *next = curr->next;
    while (curr != NULL) {
        // curr prev next
        // 1    0    1
        // 0->X   1 -> 2 -> 3 // State of linked list
        next = curr->next; 
        curr->next = prev;
        prev = curr; // 0
        curr = next;  
    }

    return prev;

}


int main () { 
    // 0 -> 1 -> 2 -> 3
    Node *head = malloc(sizeof(Node));
    // preferred 
    head->val = 0;
    head->next = NULL;
    //(*my_node).val = 0;
    int i = 0;
    Node *prev = head;
    printf("Original List: ");
    while (i < 3) {
        Node *my_node = malloc(sizeof(Node));
        my_node->val = i + 1;
        prev->next = my_node;
        my_node->next = NULL;
        prev = my_node;
        i++;
    }
    // printing a list
    print_list(head);

    // Reverse a linked list 
    // Iterative approach : 
    /** 
     * Is faster. 
     * Intuitive as well.
    */
    printf("Reversed List: ");
    // Node *reverse_head = reverse_ll_it (head); 
    // print_list(reverse_head);

    // Recursive approach : 
    // Depends: Tail optimisation - dont worry about in 1511
    //          Recursion is slower than iterative. (Stack space);
    // More fun to code up. Faster to think if you are good with recursion.

    Node *reverse_head = reverse_ll_rec (NULL, head); 
    print_list(reverse_head);
    free_list(reverse_head);
    return 0;
}