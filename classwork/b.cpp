#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> a(100);
    fill(a.begin(),a.end(),false);
    for(int i=2 ; i<=n; i++){
        if(a[i]==false){
            cout<<i<<" ";
            for(int j=i+i ;j<=n; j+=i){
                a[j]=true;
            }
        }
    }
}