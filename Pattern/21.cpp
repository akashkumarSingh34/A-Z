    void printSquare(int n) {
        // code here
        for(int i = 1; i<=n; i++){
            if(i%n==1 || i%n==0){
                for(int j = 1; j<=n; j++)
                    cout<<"*";
            }else{
                cout<<"*";
                for(int j = 1; j<=n-2; j++)
                    cout<<" ";
                cout<<"*";
            }
            cout<<endl;
        }
    }
