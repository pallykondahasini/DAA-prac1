#include <iostream>
#include <vector>
#include <utility> // For std::swap

// Function to perform Bubble Sort on a vector
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        // The last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Set flag if a swap happens
            }
        }
        
        // Optimization: If no elements were swapped, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array elements
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Original array: ";
    printArray(data);
    
    bubbleSort(data);
    
    std::cout << "Sorted array:   ";
    printArray(data);
    
    return 0;
}
