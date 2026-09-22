#include<stdio.h>
#include<stdlib.h>
struct studdet{
    int id;
    char name[50];
    int age;
};
int main(){
    struct studdet s1={0032,"RR",20};
    struct studdet *ptr=&s1;
    printf("%d\n",ptr->id);
    printf("%s\n",ptr->name);
    printf("%d",ptr->age);
    return 0;
}