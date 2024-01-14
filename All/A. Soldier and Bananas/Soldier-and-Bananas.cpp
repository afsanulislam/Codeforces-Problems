#include<iostream>
using namespace std;

int main(){
    int w;
    unsigned int n, k, l;
    cin>>k>>n>>w;
    l=k;

    for(int i=2; i<=w; i++){
        l = l + (i*k);
    }
    if(l>n)
    cout<<l-n;
    else
    cout<<0;
}