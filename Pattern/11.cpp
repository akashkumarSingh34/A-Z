    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<=i; j++){
                if(i%2==0){
                    if(j%2==0)
                        cout<<"1 ";
                    else
                        cout<<"0 ";
                }else{
                    if(j%2==0)
                        cout<<"0 ";
                    else
                        cout<<"1 ";
                }
            }
            cout<<"\n";
            
        }
    }


