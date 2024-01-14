#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<char> ch;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        ch.push_back(s[i]);
    }
    sort(ch.begin(), ch.end());
    auto n= unique(ch.begin(), ch.end());
    ch.erase(n, ch.end());

    if(ch.size()%2)
    cout<<"IGNORE HIM!";
    else
    cout<<"CHAT WITH HER!";
}