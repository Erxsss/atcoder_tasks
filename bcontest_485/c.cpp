#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int binary(vector<int> a, int n , int b){
    int l=n , r=0;
    while(r<=l){
        int mid = (l+r)/2;
        if(b==a[mid]){
            return mid;
        }
        else if(b<a[mid]){
            l=mid-1;
        }
        else{
            r=mid+1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    while(n>0){
        int b;
        cin>>b;
        cout<<binary(a, n, b);
    }
}