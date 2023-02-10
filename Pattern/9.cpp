    void printDiamond(int n) {
        // code here
        for(int i = 1 ; i <= n; i++){
            for(int k = n-i ; k > 0 ; k--)
                cout<<" ";
            for(int j = i; j > 0; j--)
                cout<<"* ";
            cout<<endl;
        }
        for(int i = n; i>0; i--){
            for(int k = n-i; k > 0; k--)
                cout<<" ";
            for(int j = i; j > 0; j--)
                cout<<"* ";
            cout<<endl;
        }
    }
