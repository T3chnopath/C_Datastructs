#include <stdio.h>

int main() {
    int size = 0;
    int sum = 0;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    printf("\n");

    int arr[size];
    
    printf("Enter element: \n");    
    for(int x = 0; x < size; x++) {
        scanf("%d", &arr[x]);
    }

    for(int x = 0; x < size; x++) {
        sum += arr[x];
    }

    printf("Sum: %d\n", sum);
    
    return 0;
}
