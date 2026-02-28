/* Swapping Values
You are given two integer values from user input. Your task is to swap the 
values of these two variables by passing them to a function using pointers.
 - Declare two variables and take them from input.
 - Pass these values to a function as pointers.
 - The function needs to swap their values.

#include <stdio.h>

void swap(int* x, int* y){
	int holding;
	holding = *x;
	*x = *y;
	*y = holding;
}

int main() {
    int x, y;
    printf("Please enter 2 whole numbers: ");
    scanf("%d %d", &x, &y);

    printf("x is %d, y is %d\n", x, y); 
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y); 

    return 0;
}
