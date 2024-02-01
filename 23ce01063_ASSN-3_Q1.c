//to determine whether the entered value is positive,negative (or) zero 

#include<stdio.h>
int main() {
   
int n;
printf("Enter the value of the number : ");
scanf("%d", &n);

if(n<0){
    printf("The number is negative");

}
else if(n=0){
    printf("The number is zero ");

}
else{
    printf("The number is positive");

}

    return 0;

}