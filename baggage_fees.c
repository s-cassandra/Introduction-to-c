/*Baggage Fees
You are making a baggage fee calculator. It should take the weight of a bag as input,
and output the fee.
 - A bag weighing up to 23kg is free. After that, each kg is billed at £12.
 - Define a function so that it takes a whole number representing the weight from input
and outputs a fee.
*/

#include <stdio.h>

int baggage(int weight){
	int total;

	if(weight>23){
		total = (weight-23)*12;
	}
	else {
		total = 0;
	}
	
	return(total);
}
int main() {
    int weight;
    printf("Please enter your baggage weight (kg): ");
    scanf("%d", &weight);

    int result = baggage(weight);
    printf("Total: £%d", result);

    return 0;
}
