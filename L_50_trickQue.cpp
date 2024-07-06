#include <iostream>

int main() {
    int arr[4][5];

    // Initialization of the array (for example)
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = i * 5 + j;  // Some value as an example
        }
    }

    // Using pointers to print addresses
    int (*ptrToArray)[5] = arr;  // Pointer to the entire array
    int *ptrToFirstElement = &arr[0][0];  // Pointer to the first element

    // Print addresses
    std::cout << "Address of the array: " << ptrToArray << std::endl;
    std::cout << "Address of the first element: " << ptrToFirstElement << std::endl;

    return 0;
}
