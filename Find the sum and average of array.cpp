//Name :Ninad Phatak
//Batch : ENTC A3
//PRN : 24070123065
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}
