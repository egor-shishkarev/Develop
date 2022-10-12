#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int element;
    struct Node* next;
} Node;

int push(Node** head, int element);

int main()
{
    Node* head = NULL;

    push(&head, 100);
    printf("%d", head->element);
    push(&head, 200);
    printf("\n%d", head->element);
    push(&head, 300);
    printf("\n%d", head->element);
}

int push(Node** head, int element)
{
    Node* temp = malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Out of memory\n");
        return -1;
    }
    temp->element = element;
    temp->next = *head;
    *head = temp;
    return 0;
}
