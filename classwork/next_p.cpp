#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector next_pun(vector a){
    
}
int main(){
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    int a;
    for(a=n-1; a>0;a--){
        if(b[a]>b[a-1]) break;
    }
    // cout<<a;
    if(a>0){
        int j=n-1;
        while(b[j]<=b[a-1])j--;
        // cout<<b[j]<<" "<<j<<endl;
        swap(b[a-1],b[j]);
    }
    reverse(b.begin()+a,b.end());
    for(int s=0 ; s<n; s++){
        cout<<b[s]<<" ";
    }
}