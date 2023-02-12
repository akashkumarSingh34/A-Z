    long long sumOfSeries(long long N) {
        // code here
        return N * N * (N+1) * (N+1) / 4;
    }
    
    or 
    
        long long sumOfSeries(long long N) {
        // code here
        if(N-1 == 0)
            return 1;
        return N*N*N + sumOfSeries(N-1);
    }
