#include <iostream>
#include <vector>
using namespace std;

vector<int> divideLargeNumber(const std::vector<int>& largeNumber, int divisor) {
    vector<int> result;
    int carry = 0;

    for (int i = 0; i < largeNumber.size(); ++i) {
        int currentDigit = (carry * 10 + largeNumber[i]) / divisor;
        result.push_back(currentDigit);
        carry = (carry * 10 + largeNumber[i]) % divisor;
    }
    
    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }
    return result;
}

int main() {
    int A;
    cout << "Enter a number A: ";
    cin >> A;

    vector<int> largeNumber(100, 9);  
    vector<int> result = divideLargeNumber(largeNumber, A);

    cout << "Result of dividing a 100-digit number by " << A << ":\n";
    for (int digit : result) {
        cout << digit;
    }
    cout << std::endl;

    return 0;
}
