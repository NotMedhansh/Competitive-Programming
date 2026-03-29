#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int countn=0;
        int countp=0;
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                countn++;
            }
            if(a[i]==1){
                countp++;
            }
        }
        int operations=0;
        while(countp < countn || countn%2==1){
            operations++;
            countp++;
            countn--;
        }
        cout<<operations<<"\n";
    
    }
}