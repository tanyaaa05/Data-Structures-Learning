
// #include <iostream>
// using namespace std;
// #include <cstring> // Include for memset

// int main() {
//     int arr[10];

//     // Fill the array with 2
//     memset(arr, 2, sizeof(arr));

//     // Print the array elements to verify
//     for(int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




#include <iostream>
#include <cstring> // Include for memset
using namespace std;

int main() {
    char arr[10];

    // Fill the array with 'B' (ASCII value 66)
    memset(arr, 'T' , sizeof(arr));

    // Print the array elements to verify
    for(int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

