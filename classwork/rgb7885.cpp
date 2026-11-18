#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k,ans=0; 
    cin>>n>>k;
    vector<int> a(n);
    fill(a.begin(), a.end(),0);
    for(int i=0 ; i<n; i++){
        int temp, uld, p;
        cin>>temp;
        uld=temp%k;
        p=(k-uld)%k;
        a[p]++;
        ans+=a[uld];
    }
    cout<<ans;
}