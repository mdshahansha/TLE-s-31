#include <iostream>
#include <algorithm>

using namespace std;


bool good(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        int ans=0;

        if (good(arr, n) ) {
            std::cout << "YES" << std::endl;
            ans=1;
            continue;
        }
        int m=n;
while(m--){
        for (int i = 1; i < n-1;i++) {
            if(arr[i]>=1 && arr[i]<=n){
                if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }else{
            std::cout << "NO" << std::endl;
            break;
            }

              if (good(arr, n) ) {
            // std::cout << "YES" << std::endl;
            ans=1;
            break;
        }
             
        }
}
        if(ans!=1){
            std::cout << "NO" << std::endl;
        }else{
            std::cout << "YES" << std::endl;

        }
    }

    return 0;
} 