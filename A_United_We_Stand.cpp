#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b,c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=*max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]!=max){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if(b.size()==0){
            cout<<"-1\n";
        }
        else{
            cout<<b.size()<<" "<<c.size()<<"\n";
        }
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<"\n";
    
    
                
                
            
        
            
            
        
    }
}