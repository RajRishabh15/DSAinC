#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100],n,i,search,found=0,key,start,end,mid;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("enter the elements in the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&search);
    start=0;
    end=n-1;
    
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==search){
            found=1;
            break;
        }else if(arr[mid]<search){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    if(found==1){
        printf("element found at index %d",mid);
    }else{
        printf("element not found");
    }
    return 0;
}