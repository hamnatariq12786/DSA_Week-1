#include <iostream>
using namespace std;

int main() {
    int choice;
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers: " << endl;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter a number for the operation: " << endl;
    cout << "1. Find minimum number" << endl;
    cout << "2. Find maximum number" << endl;
    cout << "3. Search for a number in the array" << endl;
    cout << "4. Count the number of times a number appears in the array" << endl;
    cout << "5. Print the odd numbers in the array" << endl;
    cout << "6. Print the even numbers in the array" << endl;
    cout << "7. Find the sum of all elements in the array" << endl;
    cout << "8. Reverse the array" << endl;
    cout << "9. Print all unique elements in the array" << endl;

    cin >> choice;

    switch (choice) {
        case 1: {
            int min_num = arr[0];
            for (int i = 1; i < 5; i++) {
                if (arr[i] < min_num) {
                    min_num = arr[i];
                }
            }
            cout << "Minimum number in the list is " << min_num << endl;
            break;
        }
        case 2: {
            int max_num = arr[0];
            for (int i = 1; i < 5; i++) {
                if (arr[i] > max_num) {
                    max_num = arr[i];
                }
            }
            cout << "Maximum number in the list is " << max_num << endl;
            break;
        }
        case 3: {
            int search_num;
            bool found = false;
            cout << "Enter a number to search: ";
            cin >> search_num;
            for (int i = 0; i < 5; i++) {
                if (arr[i] == search_num) {
                    found = true;
                    break;
                }
            }
            if (found) {
                cout << search_num << " is present in the array" << endl;
            } else {
                cout << search_num << " is not present in the array" << endl;
            }
            break;
        }
        case 4: {
            int count_num, times = 0;
            cout << "Enter a number to count: ";
            cin >> count_num;
            for (int i = 0; i < 5; i++) {
                if (arr[i] == count_num) {
                    times++;
                }
            }
            cout << count_num << " appears " << times << " times in the array" << endl;
            break;
        }
        case 5: {
            cout << "Odd numbers in the array are: ";
            for (int i = 0; i < 5; i++) {
                if (arr[i] % 2 != 0) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
            break;
        }
        case 6: {
            cout << "Even numbers in the array are: ";
            for (int i = 0; i < 5; i++) {
                if (arr[i] % 2 == 0) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
            break;
        }
        case 7: // Find sum of elements
            for (int i = 0; i < 5; i++) {
                sum += arr[i];
            }
            cout << "Sum of elements is: " << sum << endl;
            break;

        case 8: // Reverse array
            for (int i = 0; i < 5/2; i++) {
                int temp = arr[i];
                arr[i] = arr[4-i];
                arr[4-i] = temp;
            }
            cout << "Reversed array is: ";
            for (int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 9: // Print unique elements
            bool found;
            for (int i = 0; i < 5; i++) {
                found = false;
                for (int j = 0; j < i; j++) {
                    if (arr[j] == arr[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
           

