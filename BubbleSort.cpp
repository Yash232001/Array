#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++) {
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}























// #include <iostream>
// using namespace std;
//     void bubbleSort(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             if arr[j] < arr[j + 1];
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bubbleSort(arr, n);

//     cout << "Sorted array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
