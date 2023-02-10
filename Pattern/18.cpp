#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = n; i>0; i--){
            for(int j = n; j>=i; j--)
                cout<<char(64+j)<<" ";
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
