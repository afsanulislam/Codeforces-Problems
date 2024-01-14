#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> st;

    for (int i = 0; i < s.length(); i += 2) {
        st.push_back(s[i]);
    }

    sort(st.begin(), st.end());

    for (int i = 0; i < st.size(); i++) {
        cout << st[i];
        if (i < st.size() - 1) {
            cout << "+";
        }
    }
}