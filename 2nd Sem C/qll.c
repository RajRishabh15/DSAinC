#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
int main(){
    struct node *newnode;
    struct node *ptr;
    int i,c;
    int v;
    while(1){
        printf("===========QUEUE USING LINKED LIST==========\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                printf("Enter the element to enqueue: ");
                scanf("%d",&v);
                newnode->data=v;
                newnode->next=NULL;
                if(front==NULL && rear==NULL){
                    front=newnode;
                    rear=newnode;
                }
                else{
                    rear->next=newnode;
                    rear=newnode;
                }
                break;
            }
            case 2:{
                if(front==NULL && rear==NULL){
                    printf("UNDERFLOW\n");
                }else if(front==rear){
                    printf("Element dequeued: %d\n", front->data);
                    free(front);
                    front=NULL;
                    rear=NULL;
                }else{
                    ptr=front;
                    front=front->next;
                    printf("Element dequeued: %d\n", ptr->data);
                    free(ptr);
                }
                break;
                }
            case 3:{
                if(front==NULL && rear==NULL){
                    printf("Queue is empty\n");
            }
            else{
                ptr=front;
                while(ptr!=NULL){
                    printf("%d->",ptr->data);
                    ptr=ptr->next;
                }
            }
            break;
            }
            default:{
                printf("Invalid choice\n");
                break;
            }
    }
}
}