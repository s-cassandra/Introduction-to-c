/*Game Results
Create a programme that calculates and outputs the number of wins for the given team.
"1" represents a win and "0" represents a loss. The team has played a total of 28 games.
*/
#include <stdio.h>

int main() {
    float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    
    int wins = 0;
    for(int i=0; i<28; i++){
    	if(results[i] == 1){
    		wins+= 1;
    	}
    }
    
    printf("%d", wins);
    return 0;
}
