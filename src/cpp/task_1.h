#include <iostream>
using namespace std;
int main() {
    int year;
    
  cout << "Enter a year: ";
  cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << std::endl;
    } else {
        cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
