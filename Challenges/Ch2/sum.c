#include "sum.h"

int sum(int num) {
    static int runningTotal;
    runningTotal = runningTotal + num;
    return runningTotal;
}

