// Print the following pattern
// Pattern for N = 4

#include <iostream>
using namespace std;

int main() {
  int size;
    cin>>size;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < size - i - 1; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}