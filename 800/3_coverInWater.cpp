#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n;

        string s;
        cin>>s;
        int count3=0;
        int freq[256]={0};
        freq[s[0]]++;
        freq[s[1]]++;
        // freq[s[2]]++;
        int ans=false;
        string anss="   l";
        for(int i=2;i<n;i++){
            if(s[i]=='.' && s[i-1]=='.' && s[i-2]=='.'){
                ans=true;
                // anss="boom";
                break;
            }else{
                freq[s[i]]++;
            }

        }
        if(ans){
        cout<<"2"<<endl;
        }else{
        int dot='.';
        cout<<freq[dot]<<endl;
        }
        
    }
    return 0;

    }