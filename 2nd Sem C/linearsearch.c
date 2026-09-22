#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int a[100],n,found=0,i,key;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter the elemnents in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element u need to search for:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            printf("element found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;
}