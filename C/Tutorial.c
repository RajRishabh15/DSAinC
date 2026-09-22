// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter size of array:");
//     scanf("%d",&n);
//     int a[n][n],b[n][n],c[n][n],i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("enter element a(%dx%d):",n,n);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("enter element b(3x3):");
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             printf("%d ",c[i][j]);
//             }      
//         }
//     }
//---------------------------------------------------------------------------------------------------------------

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[100];
//     printf("enter a string:");
//     gets(s);
//     printf("the length of string is %d",strlen(s));
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     //str functions
//     printf("enter a string:");
//     gets(str);
//     printf("the length of string is %d\n",strlen(str));
//     printf("the reverse of string is:");
//     for(int i=strlen(str)-1;i>=0;i--){
//         printf("%c",str[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[5]={1,2,3,4,5};
//     int b[5]={6,7,8,9,10};
//     int mergedarr[10];
//     int i,j;
//     for(i=0;i<5;i++){
//         mergedarr[i]=a[i];
//     }for(i=0,j=9;i<5;i++,j--){
//         mergedarr[j]=b[i];
//     }
//     for(i=0;i<9;i++){
//         for(j=0;j<9-i;j++){
//             if(mergedarr[j]>mergedarr[j+1]){
//                 int temp=mergedarr[j];
//                 mergedarr[j]=mergedarr[j+1];
//                 mergedarr[j+1]=temp;
//             }
//         }
//     }
//     printf("the merged array is:\n");
//     for(i=0;i<10;i++){
//         printf("%d ",mergedarr[i]);
//     }
// }



// #include<stdio.h>
// int swap_numbers(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int A,B;
//     printf("enter two numbers:");
//     scanf("%d %d",&A,&B);
//     printf("before swapping:A=%d B=%d\n",A,B);
//     swap_numbers(&A,&B);
//     printf("after swapping:A=%d B=%d\n",A,B);
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100];
//     int vowels=0;
//     printf("enter a string:");
//     gets(a);
//     for(int i=0;i<strlen(a);i++){
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
//             vowels++;
// }}
// if(vowels>2){
//     printf("you won");
// }else{
//     printf("you lost");
// }
// }


// #include <stdio.h>  
// #include <string.h>  
// int main()
// {
// char str[] = "OMAN"; // initialzing a char array
// printf("The string is : %s\n", str); // printing the actual array  
// strrev(str); // reversing the char array
// printf("The string after using function strrev() is : %s\n", str); // printing the reversed array  return 0;
// }


// #include<stdio.h>
// int main(){
//     int A,B,temp;
//     int *a=&A,*b=&B;
//     printf("enter two numbers:");
//     scanf("%d %d",&A,&B);
//     printf("before swapping:A=%d B=%d\n",A,B);
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("after swapping:A=%d B=%d\n",*a,*b);
// }


// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter size of 1-d array:");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter array elements:");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int l=a[0],s=a[0];
//     for(i=1;i<n;i++){
//         if(a[i]>l){
//             l=a[i];
//         }
//         if(a[i]<s){
//             s=a[i];
//         }
//     }
//     printf("the largest element is %d",l);
//     printf("\nthe smallest element is %d",s);
// }

#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter size of 2-d array:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter array elements:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
}
    

