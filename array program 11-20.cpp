#include <iostream>
using namespace std;

int main() {
    int choice;
    const int SIZE = 5;
    int n = 5;
    int arr[SIZE], odd[SIZE], even[SIZE], count_odd = 0, count_even = 0;

    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "Select an option from the following menu:\n";
    cout << "1. Separate odd and even integers in separate arrays.\n";
    cout << "2. Count odd and even integers in an array.\n";
    cout << "3. Sort elements of array in ascending order.\n";
    cout << "4. Sort elements of array in descending order.\n";
    cout << "5. Find the second smallest element in array.\n";
    cout << "6. Find the second largest element in array.\n";
    cout << "7. Check if two arrays are same or not.\n";
    cout << "8. Merge two unsorted arrays of different lengths.\n";
    cout << "9. Find maximum the difference between two elements in an array.\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] % 2 == 0) {
                    even[count_even] = arr[i];
                    count_even++;
                } else {
                    odd[count_odd] = arr[i];
                    count_odd++;
                }
            }

            cout << "Odd numbers: ";
            for (int i = 0; i < count_odd; i++) {
                cout << odd[i] << " ";
            }
            cout << endl;

            cout << "Even numbers: ";
            for (int i = 0; i < count_even; i++) {
                cout << even[i] << " ";
            }
            cout << endl;

            break;

        case 2:
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] % 2 == 0) {
                    count_even++;
                } else {
                    count_odd++;
                }
            }

            cout << "Number of odd integers: " << count_odd << endl;
            cout << "Number of even integers: " << count_even << endl;

            break;

        case 3:
            for (int i = 0; i < SIZE - 1; i++) {
                for (int j = i + 1; j < SIZE; j++) {
                    if (arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            cout << "Array in ascending order: ";
            for (int i = 0; i < SIZE; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            break;
        case 4: // Sort array in descending order
            for (int i = 0; i < n-1; i++) {
                for (int j = i+1; j < n; j++) {
                    if (arr[i] < arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            cout << "Array in descending order: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 5: // Find second smallest element in array
            int smallest, second_smallest;

            if (arr[0] < arr[1]) {
                smallest = arr[0];
                second_smallest = arr[1];
            } else {
                smallest = arr[1];
                second_smallest = arr[0];
            }

            for (int i = 2; i < n; i++) {
                if (arr[i] < smallest) {
                    second_smallest = smallest;
                    smallest = arr[i];
                } else if (arr[i] < second_smallest) {
                    second_smallest = arr[i];
                }
            }

            cout << "Second smallest element in array is: " << second_smallest;
            break;

        case 6: // Find second largest element in array
            int largest, second_largest;

            if (arr[0] > arr[1]) {
                largest = arr[0];
                second_largest = arr[1];
            } else {
                largest = arr[1];
                second_largest = arr[0];
            }

            for (int i = 2; i < n; i++) {
                if (arr[i] > largest) {
                    second_largest = largest;
                    largest = arr[i];
                } else if (arr[i] > second_largest) {
                    second_largest = arr[i];
                }
            }

            cout << "Second largest element in array is: " << second_largest;
            break;

        default:
            cout << "Invalid choice!";
            break;
    }
}

