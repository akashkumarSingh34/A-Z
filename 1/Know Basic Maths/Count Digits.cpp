    int evenlyDivides(int N){
        //code here
        int count = 0;
        for(int i = N; i>0; i/=10){
            if(i%10==0)
                continue;
            if(N%(i%10)==0)
                count++;
        }
        return count;
    }
