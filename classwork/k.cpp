// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> a(100);
    fill(a.begin(),a.end(),false);
    for(int i=2 ; i<=n; i++) {
        if(a[i]==false){
            for(int j=i*i ;j<=n; j+=i){
                a[j]=true;
            }
        }
    }
    for(int k=0 ; k<n; k++){
        if(a[k]==false){
            while(n%k==0){
                cout<<k<<" ";
                n/=k;
            }
        }
    }
}