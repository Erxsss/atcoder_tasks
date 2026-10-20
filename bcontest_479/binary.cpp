#include<bits/stdc++.h>
using namespace std;

int bin(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int prev = bin(n/2);
    return 10*prev+(n/2);
}

int main(){
    int n;
    cin>>n;
    cout<<bin(n);
}
