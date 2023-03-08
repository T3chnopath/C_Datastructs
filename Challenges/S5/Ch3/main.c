int x = 0;

//reference the function in display.c
extern void display();

int main() {

    for(int x = 0; x < 5; x++) {
        display();
    }     

    return 0;
}
