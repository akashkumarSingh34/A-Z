    void printTriangle(int n) {
        // code here
        for(int i = 1; i <= n; i++){
            for(int j = i; j > 0; j--)
                cout<<"* ";
            cout<<endl;
        }
        for(int i = n-1; i > 0; i--){
            for(int j = i; j > 0; j--)
                cout<<"* ";
            
            cout<<endl;
        }
    }
