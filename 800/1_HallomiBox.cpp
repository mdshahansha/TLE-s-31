#include <iostream>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

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
        int n, k;
        std::cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        if (good(arr, n)) {
            std::cout << "YES" << std::endl;
            continue;
        }

        for (int it = 0; it < n;) {
            int srlen = 0, erlen = 0;

            if (it + 1 < n && arr[it] >= arr[it + 1]) {
                srlen = it;
                erlen = it + 1;

                while (erlen + 1 < n && arr[erlen] >= arr[erlen + 1]) {
                    erlen++;
                }

                int sublen = erlen - srlen + 1;

                if (sublen <= k) {
                    reverseArray(arr, srlen, erlen);
                }

                it = erlen + 1; // Skip the reversed part
            } else {
                it++;
            }
        }

        if (good(arr, n)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}

// //Loop Conditions:
// In the loop where you are finding subarrays to reverse, the condition arr[it-1]>=arr[it] is incorrect. It should be arr[it - 1] > arr[it] because you want to find strictly decreasing sequences to reverse.

// Reverse Operation:
// After finding a subarray to reverse, you need to update the value of it to skip the reversed part in the next iteration.