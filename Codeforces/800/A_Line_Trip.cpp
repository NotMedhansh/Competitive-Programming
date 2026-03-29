#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int gap=a[0];
        for(int i=1;i<n;i++){
            gap= max(gap, (a[i] - a[i-1]));
        }
        
        int gas=(x-(a[n-1]))*2;
        gap=max(gap,gas);
        cout<<gap<<"\n";
    }
}