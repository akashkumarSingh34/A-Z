#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n; i++){
            for(int k = n-i; k>0; k--)
                cout<<" ";
            for(char j = 'A'; j<=64+i; j++)
                cout<<j;
            for(char j = 63+i; j>=65; j--)
                cout<<j;
            cout<<endl;
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
