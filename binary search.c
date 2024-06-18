#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    int left = 0, right = n - 1;
    int found = 0;

    printf("Enter number to search: ");
    scanf("%d", &target);

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            printf("%d found at index %d\n", target, mid);
            found = 1;
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (!found)
        printf("%d not found in the array\n", target);

    return 0;
}
