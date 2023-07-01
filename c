#include <stdio.h>
#include <stdlib.h>

void search(int arr[], int m) {
    for (int i = 0; i < 6 ;i++) {
        if (arr[i] == m) {
            printf("The element is found.\n");
            
        }
    }
    printf("The element is not found.\n");
}

int main() {
    int a[6] = {1, 2, 3, 4, 56, 78};
    int m;
    printf("Enter the number you want to search: ");
    scanf("%d", &m);

    search(a, m);

    return 0;
}
