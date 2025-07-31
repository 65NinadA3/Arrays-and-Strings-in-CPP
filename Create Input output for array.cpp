//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
  int numbers[7];  
    cout << "Enter 7 numbers:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }
    cout << "You entered:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}
