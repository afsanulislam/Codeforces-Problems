#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned n,k;
    cin>>n>>k;

    for(int i=0; i<k; i++){
        if(n%10){
            n=n-1;
        }
        else{
            n = n/10;
        }
    }
    cout<<n;
}