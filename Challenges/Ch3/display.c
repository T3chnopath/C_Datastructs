#include <stdio.h>

extern int x;

void display() {
    x += 1; 
    printf("%d \n", x); 
}
