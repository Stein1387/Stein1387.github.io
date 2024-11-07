#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
 {
    vector<string>  msg {"Hello", "world!",  "This", "is", "not", "test"};
    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;
}