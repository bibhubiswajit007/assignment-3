#include<stdio.h>

int main(){
    int num;
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The entered number is positive.\n");
    } else if (num< 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}