#include<bits/stdc++.h>
#include<vector>
using namespace std;

int too=1000000;

int main(){
    vector<int> huvagc(too+1);
    for(int i=1 ; i<=too ; i++){
        for(int j=i ; j<=too ; j+=i){
            huvagc[j]++;
        }
    }
    int n; 
    cin>>n;
    for(int k=0; k<n; k++){
        int num;
        cin>>num;
        cout<<huvagc[num]<<endl;
    }
}