#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n), dp(n, 1);
    for(int x=0 ; x<n; x++) cin>>a[x];
    for(int i=1; i<n; i++){
        for(int j=0; j<i ; j++){
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
                // cout<<a[j]<<" "<<a[i]<<" ";
            }
        }
            // cout<<dp[i]<<" "<<endl;
    }
    sort(dp.begin(), dp.end());
    cout<<dp[n-1];
}