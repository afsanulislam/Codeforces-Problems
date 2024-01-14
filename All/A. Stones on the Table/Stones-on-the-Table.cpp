#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    char a;
    vector<char> ch;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        ch.push_back(a);
    }
    int i= ch.size();
    auto rm= unique(ch.begin(), ch.end());
    ch.erase(rm, ch.end());

    cout<< i-ch.size();
}