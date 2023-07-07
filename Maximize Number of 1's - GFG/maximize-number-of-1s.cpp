//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
         int count = 0;  // Count of zeros within the window
    int left = 0;   // Left pointer of the window
    int maxLen = 0; // Maximum length of subarray with at most 'm' zeros

    for (int right = 0; right < n; right++) 
    {
        if (arr[right] == 0) {
            count++;
        }

        while (count > m) {
            if (arr[left] == 0)
            {
                count--;
            }
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
    }  
      
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends