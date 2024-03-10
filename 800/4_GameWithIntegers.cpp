#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n;
        if(n==1){
            cout<<"First"<<endl;
            continue;
        }else if(n%3==0){
            cout<<"Second"<<endl;
            continue;
        }else{
            cout<<"First"<<endl;
        }

    }
    return 0;
    }
    