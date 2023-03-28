 // for sorted array	time complexity O(logn)


int search(int A[], int N){
	    //code
	   for(int i=0; i<=N-1; i+=2){
	       if(A[i]!=A[i+1])
	            return A[i];
	   }
	   return 0;
	    
	
	}


// for an unsorted array time complexity O(n)

	int search(int A[], int N){
	    //code
	    int number = 0;
	   for(int i = 0; i<N; i++)
	        number = number ^ A[i];
	   return number;
	    
	}

