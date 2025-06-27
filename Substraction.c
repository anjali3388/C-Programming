#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sub;
    printf("Enter first Number: \n");
    scanf("%d",&num1);
    printf("Enter second Number:");
    scanf("%d",&num2);

    sub = num1 - num2;
    printf("Sub = %d\n", sub);

    return 0;
}