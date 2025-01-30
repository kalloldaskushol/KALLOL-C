#include <stdio.h>

int main() {
    int arr[1000], size, choice, index, value;

    printf("\nEnter array size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Update (index / value)\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size >= 1000) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
                    arr[size] = value;
                    size++;
                    printf("Inserted successfully.\n");
                }
                break;

            case 2:
                printf("Enter index to update (0 to %d): ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[index] = value;
                    printf("Updated successfully.\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 3:
                printf("Enter index to delete (0 to %d): ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    for (int i = index; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    printf("Deleted successfully.\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 4: 
                printf("Current array:\n");
                for (int i = 0; i < size; i++) {
                    printf("Index %d: %d\n", i, arr[i]);
                }
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
