    string armstrongNumber(int n){
        // code here
        int num = 0;
        for(int i = n, rem = i%10; i > 0 ; i/=10, rem = i%10){
            num += rem*rem*rem ;
        }
        if(num == n)
            return "Yes";
        return "No";
    }



