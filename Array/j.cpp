#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string item;
    int wink;

    // Read input
    cin >> item >> wink;

    // Convert input string to lowercase
    transform(item.begin(), item.end(), item.begin(), ::tolower);

    int maxElectronicCount = 0;

    // Iterate through the string
    for (int i = 0; i <= item.length() - wink; ++i) {
        int currentElectronicCount = 0;
        for (int j = i; j < i + wink; ++j) {
            if (item[j] == 'a' || item[j] == 'e' || item[j] == 'i' || item[j] == 'o' || item[j] == 'u') {
                ++currentElectronicCount;
            }
        }
        maxElectronicCount = max(maxElectronicCount, currentElectronicCount);
    }

    // Print the result
    cout << maxElectronicCount << endl;

return 0;
}