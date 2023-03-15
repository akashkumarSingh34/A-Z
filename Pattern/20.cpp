#include <bits/stdc++.h>

using namespace std;


class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n; i++){
            for(int j = i; j>0; j--)
                cout<<"*";
            for(int k = 2*(n-i); k>0; k--)
                cout<<" ";
            for(int j =i; j>0; j--)
                cout<<"*";
            cout<<"\n";
        }
        
        for(int i = n-1; i>0; i--){
            for(int j = i; j>0; j--)
                cout<<"*";
            for(int k = 2*(n-i); k>0; k--)
                cout<<" ";
            for(int j =i; j>0; j--)
                cout<<"*";
            cout<<"\n";
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
