#include <stdio.h>
#include <malloc.h>

typedef struct myArray{
    int size;
    int array[];
} myArray_t;

int main() {
    int size = 0;

    printf("Enter size of array: \n");
    scanf("%d", &size);

    myArray_t *s;

    s = malloc(sizeof(myArray_t) + size * sizeof(int));
    
    printf("Enter numbers: \n");
    for(int x = 0; x < size; x ++) {
        scanf("%d", &(s->array[x]));
    }
    printf("\n");

    printf("Enterered numbers: \n");
    for(int x = 0; x < size; x++){
        printf("%d \n", s->array[x]);
    }
    

    return 0;
}
