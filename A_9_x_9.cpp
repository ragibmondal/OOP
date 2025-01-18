#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    size_t pos = s.find('x');
    
    int a = stoi(s.substr(0, pos));
    int b = stoi(s.substr(pos + 1));
    

    int result = a * b;
    
    cout << result << endl;
    
    return 0;
}