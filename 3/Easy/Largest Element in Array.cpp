    int largest(vector<int> &arr, int n)
    {
        int ele = 0;
        for(int i = 0 ; i<n ; i++)
            if(ele<arr[i])
                ele = arr[i];
        return  ele;
    }
