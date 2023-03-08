#include "sum.h"

//uses static variable that is not on the stack
//variable persists across function calls 
int sum(int num) {
    static int runningTotal;
    runningTotal = runningTotal + num;
    return runningTotal;
}

