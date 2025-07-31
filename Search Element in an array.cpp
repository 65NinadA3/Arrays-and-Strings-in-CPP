//Name : Ninad Phatak
//Batch : ENTC A3
//PRN : 24070123065
#include <iostream> 
using namespace std; 
int main() {
    int marks[5] = {10, 25, 7, 42, 15};
    int key;
    bool found = false;
    cout << "Enter the number you want to search for: ";
    cin >> key; 
    for (int i = 0; i < 6; i++) {
       if (key == marks[i]) {
            cout << "Key found at location: " << i+1 << endl;  
            found = true; 
            break;
        }
    }
    if(!found){
        cout << "Key not found in the array." << endl; 
    }
    return 0; 
}
