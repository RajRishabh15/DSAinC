#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
int main(){
    struct node *start = NULL;
    struct node *ptr,*preptr,*newnode;
    int choice,num,data,pos;
    while(1){
        printf("\n----- DOUBLY LINKED LIST MENU -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After a Node\n");
        printf("4. Insert Before a Node\n");
        printf("5. Delete First Node\n");
        printf("6. Delete Last Node\n");
        printf("7. Delete After a Node\n");
        printf("8. Traversal\n");
        printf("9. Search\n");
        printf("10. Exit\n");

        printf("Enter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:{
                printf("\nInsert node at beginning\n");
                printf("Enter the value data:");
                scanf("%d",&data);
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->prev=NULL;
                newnode->next=start;
                start=newnode;
                printf("\nNode inserted at beginning\n");
                break;
            }
            case 2:{
                printf("\nInsert node at end\n");
                printf("Enter the value data");
                scanf("%d",&data);
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->next=NULL;
                ptr=start;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=newnode;
                newnode->prev=ptr;
                printf("\nNode inserted at end\n");
                break;
            }
            case 3:{
                printf("\nInsert after a node\n");
                printf("Enter the postion you want to enter the node data:");
                scanf("%d",&pos);
                printf("\nEnter the data value:");
                scanf("%d",&data);
                ptr=start;
                while(ptr->data!=pos){
                    ptr=ptr->next;
                }
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->prev=ptr;
                newnode->next=ptr->next;
                ptr->next=newnode;
                printf("\nNode inserted succesfully\n");
                break;
            }
            case 4:{
                printf("\nInsert before a node\n");
                printf("Enter the postion\n");
                scanf("%d",&pos);
                printf("\nEnter Data:\n");
                scanf("%d",&data);
                ptr=start;
                while(ptr->data!=pos){
                    ptr=ptr->next;
                }
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->next=ptr;
                newnode->prev=ptr->prev;
                if(ptr->prev!=NULL){
                    ptr->prev->next=newnode;
                }else{
                    start=newnode;
                }
                ptr->prev=newnode;
                printf("\nNode inserted succesfully\n");
                break;
            }
            case 5:{
                printf("\nDelete first element\n");
                ptr=start;
                start=start->next;
                start->prev=NULL;
                free(ptr);
                printf("\nNode deleted\n");
                break;
            }
            case 6:{
                printf("\nDelete last node\n");
                break;
            }
            case 8:{
                printf("Traversal of the doubly linked list\n");
                ptr=start;
                while(ptr!=NULL){
                    printf("%d <->",ptr->data);
                    ptr=ptr->next;
                }
                break;
            }
            default:{
                printf("\nInvalid choice\n");
            }
        }
    }
    return 0;
}