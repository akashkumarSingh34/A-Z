    void printTriangle(int n) {
        // code here
        for(int i=1,m=1; i<=n; i++,m+=2){
            for(int k=n-i; k>0; k--)
                cout<<" ";
            for(int j=m; j>0; j--)
                cout<<"*";
            cout<<endl;
        }
    }
