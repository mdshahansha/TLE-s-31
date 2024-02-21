#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        
     
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
           int ans=arr[0];
        if(n==1){
        ans=max(2*(d-arr[n-1]),ans);
        ans=max(ans,arr[n-1]);
        cout<<ans<<endl;
        continue;
        }
        for(int i=1;i<n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        ans=max(2*(d-arr[n-1]),ans);
        cout<<ans<<endl;

    }
}