#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i <= n; i++){
            for(int j =1; j <= i; j++)
                cout<<j<<" ";
            for(int k = 2*n - 2*i; k > 0; k--)
                cout<<"  ";
            for(int j =i; j > 0; j--)
              
                cout<<j<<" ";
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
