#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++) cin>>b[i];
    sort(a.begin(), a.end());
    if(a==b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
