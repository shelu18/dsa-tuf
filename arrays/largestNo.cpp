#include <iostream>
using namespace std;

int sfindLargestElement(int arr[], int n) {
    // Initialize the first element as the largest
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    int slargest =-1;
    for (int i=n-2; i>=0; i--) {
        if (arr[i]>slargest && arr[i] < largest) {
           slargest=  arr[i];
        }
    }

   
return slargest;
}

int main() {
    // Example array
    int array[] = {10, 45, 2, 87, 56, 23};
    int n = sizeof(array) / sizeof(array[0]);

    // Find and print the largest element
    int slargestElement = sfindLargestElement(array, n);
    cout << "The  second largest element in the array is: " << slargestElement << endl;

    return 0;
}



//most optimal ......

// int findSecondLargestElement(int arr[], int n) {
//     // Handle edge cases
//     if (n < 2) {
//         return -1; // Not enough elements to find second largest
//     }

//     int largest = arr[0];
//     int secondLargest = -1; // Initialize to a value that is less than any possible element

//     // Find the largest element
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     // Handle cases where no valid second largest was found
    

//     return secondLargest;
// }