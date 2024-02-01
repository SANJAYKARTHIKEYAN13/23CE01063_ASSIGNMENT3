
#include<stdio.h>
int main() {
    
float T,M,W,N,K;
printf("Enter the number of marks obtained : ");
scanf("%f", &M);
printf("No of classes attended :");
scanf("%f", &N);
printf("NO of classes conducted : ");
scanf("%f", &K);
W=N/K;
T=M*W;
if(T>=90){
    printf("Grade = EX");
}
else if(T>=80&&T<89){
    printf("Grade = A");

}
else if(T>=70&&T<79){
    printf("Grade = B");
}
else if(T>=60&&T<69){
    printf("The grade = C");

}
else if(T>=50&&T<59){
    printf("The grade = D");

}
else if(T>=40&&T<49){
    printf("The grade = P ");
}
else {
    printf("Grade = FAIL");
}
    return 0;

}