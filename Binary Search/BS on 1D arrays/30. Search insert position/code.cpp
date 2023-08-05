class Solution{
    public:
    int insertPosition(vector<int>arr, int lo, int hi, int x){
        // region: ! ! ! ! ! $ $ $ $ $ $
        //                hi lo
      
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            // target found
            if(x == arr[mid]){
              return mid;
            }
            // target possibly in left subspace
            else if(x < arr[mid]){
              hi = mid-1;
            }
            // target possibly in right subspace
            else{
              lo = mid+1;
            }
        }

        // target not found; should have been at upper_bound(target)
        return lo;
    }
    
    int searchInsertK(vector<int>arr, int n, int k){
        return insertPosition(arr, 0, n-1, k);
    }
};
