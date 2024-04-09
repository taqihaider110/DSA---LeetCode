#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array size is too small." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == largest) {
        cout << "There is no second largest element." << endl;
        return -1;
    }

    return secondLargest;
}

int main() {
    const int size = 7;
    int arr[size] = {5, 10, 8, 20, 15, 7, 12};

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    return 0;
}
