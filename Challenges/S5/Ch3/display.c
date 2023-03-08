#include <stdio.h>

//reference the global variable x in main
extern int x;

void display() {
    x += 1;  //change the value of x in main
    printf("%d \n", x); 
}
