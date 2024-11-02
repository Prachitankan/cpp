//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
public:
    const int MOD = 1000000007;

    int CountPairs(int N, int k, vector<int> &arr) {
          unordered_map<int, int> freq;
        int count = 0;

        for (int i = 0; i < N; i++) {
            int remainder = arr[i] % k;
            int complement = (k - remainder) % k;

            if (freq.count(complement)) {
                count += freq[complement];
            }

            freq[remainder]++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int k;
        scanf("%d", &k);

        vector<int> arr(N);
        Array::input(arr, N);

        Solution obj;
        int res = obj.CountPairs(N, k, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends