#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printSquare(int n) {
        // code here
      for(int i=0; i<n; i++){
            for(int j=n; j>0; j--)
                cout<<"* ";
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
        ob.printSquare(n);
    }
    return 0;
}


 
