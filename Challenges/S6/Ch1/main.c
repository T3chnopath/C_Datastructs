:#include <stdio.h>

int main() {
    int size = 0;
    int sum = 0;
    printf("Enter size of array: \n");
    scanf("%d", &size);

    int arr[size];
    
    for(int x = 0; x < size; x++) {
        printf("Enter element: \n");
        scanf("%d", &arr[x]);
    }

    for(int x = 0; x < size; x++) {
        sum += arr[x];
    }

    printf("Sum: %d", sum);
    
    return 0;
}
