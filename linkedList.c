#include <stdio.h>

struct node{
    int value;
    struct node* next;
};

typedef struct node node_t;

void prinlist(node_t *head){
    node_t *temporary = head;

    while (temporary != NULL){
        printf("%d --", temporary -> value);
        temporary = temporary->next;
    }
    printf("\n");
}

int main(){
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    head = &n3; // assigning the head of the list
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL; // stopping point

    prinlist(head);

    return 0;

}