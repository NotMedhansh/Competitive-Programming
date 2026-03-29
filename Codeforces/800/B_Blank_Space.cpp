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
        int count=0;
        int maxcount=count;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
                
                maxcount=max(count,maxcount);
            }
            else if(a[i]==1){
                count=0;
            }
            
        }
        cout<<maxcount<<"\n";
    }
}