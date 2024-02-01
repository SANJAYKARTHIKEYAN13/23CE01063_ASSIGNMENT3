#include<stdio.h>
int main() {
    
int days;
printf("Enter the number of days :");
scanf("%d", &days);
if(days<=5&&days>=1){
    printf("The fine is one rupee");

}
if(days>=6&&days<=10){
    printf("The fine is 2 rupees");

}
else if(days>10&&days<=30){
    printf("The fine is 5 rupees");

}
else if(days>30){
    printf("Your membership is cancelled");
}
    return 0;

}