#include<stdio.h>
#include<stdlib.h>
#define max 50
int main(){
    int stack[max],top=-1;
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
                if(top==max-1){
                    printf("Stack Overflow\n");
                }else{
                    top++;
                    printf("Enter the element to push: ");
                    scanf("%d",&stack[top]);
                }
                break;
            }
            case 2:{
                // Code for pop operation
                if(top==-1){
                    printf("Stack Underflow\n");
                }else{
                    top=top-1;
                    printf("%d",stack[top]);
                }
                break;
            }
            case 3:{
                // Code for peek operation
                printf("The top element is: %d\n",stack[top]);
                break;
            }
            case 4:{
                // Code for display operation
                if(top==-1){
                    printf("Stack is empty\n");
                }else{
                    int i;
                    for(i=0;i<=top;i++){
                        printf("%d ",stack[i]);
                    }
                    printf("\n");
                }
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
}