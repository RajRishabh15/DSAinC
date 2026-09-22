// #include <stdio.h>
// int main() {
//     int i, j;
//     int n;
//     printf("Enter the number of family members: ");
//     scanf("%d", &n);     
//     for(i = n; i>=1; i--) {      
//         for(j = 1; j <= i; j++) {     
//             printf(":)");
//         }
//         printf("\n");                
//     }
//     return 0;
// }


// // #include <stdio.h>
// // int main()
// // {
// //  float k = 0;
// //  for (k = 0.5; k < 3; k++)
// //  printf("I love C\n");
// //  return 0;
// // }



// // #include<stdio.h>
// // void func(int n, int sum)
// // {
// // int k = 0, j = 0;
// // if (n == 0) return;
// // k = n % 10;
// // j = n / 10;
// // sum = sum + k;
// // func (j, sum);
// // printf ("%d,", k);
// // }
// // int main ()
// // {
// // int a = 2048, sum = 0;
// // func (a, sum);
// // printf ("%d ", sum);
// // }

// //functions


// // #include <stdio.h>
// // void display(int n)
// // {
// //     if (n > 0)
// //     {
// //         printf("%d ", n);
// //         display(n - 1);
// //     }
// // }
// // int main()
// // {
// //     int num = 5;
// //     display(num);
// //     return 0;
// // }


// // #include<stdio.h>
// // int add(int x,int y){
// //     return x+y;
// // }
// // int sub(int x,int y){
// //     return x-y;
// // }
// // int calc(int a,int b,int c){
// //     int sum=add(a,b);
// //     return sub(sum,c);
// // }
// // int main(){
// //     int a,b,c,result;
// //     printf("input three numbers:");
// //     scanf("%d %d %d",&a,&b,&c);
// //     result=calc(a,b,c);
// //     printf("final:%d",result);
// // }


// // #include<stdio.h>
// // #include<string.h>
// // char* address(char city[],char state[],char zip[]){
// //     static char fulladrs[100];
// //     strcpy(fulladrs,city);
// //     strcat(fulladrs,",");
// //     strcat(fulladrs,state);
// //     strcat(fulladrs,",");
// //     strcat(fulladrs,zip);
// //     return fulladrs;
// // }
// // int main(){
// //     char city[50],state[50],zip[50];
// //     printf("city:");
// //     gets(city);
// //     printf("state:");
// //     gets(state);
// //     printf("zip:");
// //     gets(zip);
// //     char* result=address(city,state,zip);
// //     printf("address is:%s",result);
// // }


// #include <stdio.h>
// void merger(const int a[], int n1, const int b[], int n2, int merged[]) {
//     for (int i = 0; i < n1; i++) {
//         merged[i] = a[i];
//     }
//     for (int j = 0; j < n2; j++) {
//         merged[n1 + j] = b[j];
//     }
// }
// int main(void) {
//     int n1, n2;
//     printf("Enter size of first array: ");
//     scanf("%d", &n1);
//     printf("Enter size of second array: ");
//     scanf("%d", &n2);
//     int a[n1], b[n2];
//     int merged[n1 + n2];
//     printf("Enter %d elements of first array:\n", n1);
//     for (int i = 0; i < n1; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter %d elements of second array:\n", n2);
//     for (int i = 0; i < n2; i++) {
//         scanf("%d", &b[i]);
//     }
//     merger(a, n1, b, n2, merged);
//     printf("Merged array in reverse order:\n");
//     for (int i = n1 + n2 - 1; i >= 0; i--) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter elements of array:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int *ptr=arr;
//     printf("elements of array:");
//     for(int i=0;i<n;i++){
//         printf("%d ",*ptr);
//         ptr++;
//     }
//     printf("\n");
// }


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>c&&a>b){
//         printf("the largest number is %d",a);
//     }else if(b>c&&b>a){
//         printf("the largest number is %d",b);
//     }else{
//         printf("the largest number is %d",c);
//     }
// }

