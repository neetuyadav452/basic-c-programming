#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next;
};
void traversal(struct node*ptr){
    while (ptr != NULL) {
        printf("elements : %d\n",ptr->data);
      ptr = ptr->next;
    }
}
int main(){
    //memoery allocate in stack
    struct node *first; 
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    // memory allocate in heap
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    first->data = 7;
    first->next = second;
    second->data = 14;
    second->next = third;
    third->data = 21;
    third->next = fourth;
    fourth->data =28;
    fourth->next = fifth;
    fifth->data = 35;
    fifth->next = NULL;
traversal(first);
    return 0;
    }