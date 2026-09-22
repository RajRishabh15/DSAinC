// #include<stdio.h>
// int main(){
//     int n,sum,choice;
//     printf("enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements of array:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("the elements of array are:");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         sum=+arr[i];
//     }
//     printf("\nthe sum of array is %d",sum);
//     printf("\ndo you want to reverse the array:\nif yes press 1\nif no press 2");
//     printf("\nenter your choice:");
//     scanf("%d",&choice);
//     if(choice==1){
//         printf("the reverse of array is:");
//         for(int i=n-1;i>=0;i--){
//             printf("%d ",arr[i]);
//         }
//     }
//         else{
//             printf("thank you");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter size of 1-d array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter array elements:");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements are:");
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     int sum = 0;
//     for(i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     printf("\nthe sum of array is %d",sum);
//     int avg=sum/n;
//     printf("\nthe average of array is %d",avg);
// }



//add matrix using pointers
// #include<stdio.h>
// int main(){
//     int r,c,i,j;
//     printf("enter number of rows and columns:");
//     scanf("%d%d",&r,&c);
//     int a[r][c],b[r][c],sum[r][c];
//     printf("enter elements of first matrix:");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter elements of second matrix:");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     //adding two matrices using pointers
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
//         }
//     }
//     printf("the sum of two matrices is:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("%d ",*(*(sum+i)+j));
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, remainder, n = 0;
//     double result = 0.0;

//     // Input number
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     // Count number of digits
//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     // Compute sum of digits raised to power n
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     // Check Armstrong condition
//     if ((int)result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }

#include<stdio.h>
// Recursive function
int factorial(int n) {
    if (n <= 1)
    return 1;
    return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}