#include <iostream>

using namespace std;

int CountDigits(int n) {
    int count = 0;
    while (n > 0) {
        int lastdigit = n % 10;
        if (lastdigit != 0 && n % lastdigit == 0) {
            count = count + 1;
        }
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = CountDigits(n);
    cout << "Count of digits that divide the number: " << result << endl;
    return 0;
}
