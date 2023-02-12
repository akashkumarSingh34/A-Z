		string is_palindrome(int n)
		{
		    // Code here.
		    int rev = 0;
		    for(int i =n; i>0; i/=10){
		        rev = rev * 10 + i % 10;
		    }
		    if(n==rev)
		        return "Yes";
		    return "No";
		}
