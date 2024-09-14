#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL; // Corrected typo and return NULL
    }
    newNode->data = data; // Initialize the data field
    newNode->next = NULL; // Initialize the next pointer
    return newNode;
}

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) {
        return;
    }
    newNode->next = *top;
    *top = newNode; // Corrected typo
    printf("%d pushed onto the stack\n", data);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is Empty\n");
        return INT_MIN;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next; // Corrected typo
    free(temp);
    return poppedValue;
}

int peak(struct Node* top) {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return INT_MIN;
    }
    return top->data;
}

int beginning(struct Node* top) {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return INT_MIN;
    }
    struct Node* current = top;
    while (current->next != NULL) {
        current = current->next;
    }
    return current->data;
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);

    printf("Top element: %d\n", peak(top));
    printf("Bottom element: %d\n", beginning(top));

    printf("Popped element is %d\n", pop(&top));
    printf("Popped element is %d\n", pop(&top));

    printf("Top element after popping is %d\n", peak(top));
    return 0;
}