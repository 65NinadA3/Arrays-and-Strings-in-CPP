//Name : Ninad Phatak
//Batch : ENTC A3
//PRN : 24070123065
#include <iostream>
using namespace std;
int main() {
    int arr[50], num, temp, i, j;
    cout << "Please, enter the total no. you want to enter: ";
    cin >> num;
    for (i = 0; i < num; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (i = 0, j = num - 1; i < num / 2; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "\nReverse all elements of the array: " << endl;
    for (i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
