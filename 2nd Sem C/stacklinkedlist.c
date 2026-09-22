#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *top = NULL;
    struct node *newnode,*temp;
    while(1){
        int choice;
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3.Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                // Code for push operation
                int data;
                printf("Enter the element to push: ");
                scanf("%d",&data);
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->next=top;
                top=newnode;
                break;
            }
            case 2:{
                // Code for pop operation
                temp=top;
                if(top==NULL){
                    printf("Stack Underflow\n");
                }else{
                    top=top->next;
                    free(temp);
                }
                break;
            }
            case 3:{
                // Code for peek operation
                if(top==NULL){
                    printf("Stack is empty\n");
                }else{
                    printf("The top element is: %d\n",top->data);
                }
                break;
            }
            case 4:{
                // Code for display operation
                temp=top;
                while(temp!=NULL){
                    printf("%d ",temp->data);
                    temp=temp->next;
                }
                printf("\n");
                break;
            }
            case 5:{
                exit(0);
            }
            default:{
                printf("Invalid choice! Please try again.\n");
            }
        }
    }
    return 0;
}
