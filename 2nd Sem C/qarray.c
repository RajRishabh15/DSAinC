#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,c;
    int front=-1;
    int rear=-1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int q[n];
    while(1){
        printf("===========QUEUE USING ARRAY==========\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:{
                if(rear==n-1){
                    printf("OVERFLOW\n");
                }else if(front==-1 && rear==-1){
                    printf("Enter the element to enqueue: ");
                    front=0;
                    rear=0;
                    scanf("%d",&q[rear]);
                }else{
                    rear++;
                    printf("Enter the element to enqueue: ");
                    scanf("%d",&q[rear]);
                }
                break;
            }
            case 2:{
                if(front==-1 || front>rear){
                    printf("UNDERFLOW\n");
                }else if(front==rear){
                    front=-1;
                    rear=-1;
                    printf("Element dequeued: %d\n", q[front]);
                }else{
                    front++;
                    printf("Element dequeued: %d\n", q[front-1]);
                }
                break;
            }
            case 3:{
                if(front==-1 || front>rear){
                    printf("Queue is empty\n");
                }else{
                    printf("Elements in the queue: ");
                    for(i=front;i<=rear;i++){
                        printf("%d ",q[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 4:{
                exit(0);
                break;
            }
            default:{
                printf("Invalid choice\n");
                break;
            }
        }
    }
}
