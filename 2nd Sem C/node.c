#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *start=NULL;
    struct node *newnode,*ptr,*preptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=10;
    newnode->next=NULL;
    start=newnode;
    ptr=start;

    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}