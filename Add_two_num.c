#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sum;
    printf("Enter first Number: \n");
    scanf("%d",&num1);
    printf("Enter second Number:");
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    return 0;
}
