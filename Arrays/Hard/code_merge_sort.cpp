class Solution{
  public:
    long long merge(long long arr[], int lo, int mid, int hi){
        long long ans = 0;
        
        vector<long long> v;
        int left = lo, right = mid+1;
        while(left <= mid && right <= hi){
            if(arr[left] <= arr[right]){
                v.push_back(arr[left]);
                left++;
            }
            else{
                v.push_back(arr[right]);
                ans += (mid-left+1);
                right++;
            }
        }
        while(left <= mid){
            v.push_back(arr[left]);
            left++;
        }
        while(right <= hi){
            v.push_back(arr[right]);
            right++;
        }
        
        for(int i = lo; i <= hi; ++i){
            arr[i] = v[i-lo];
        }
        
        return ans;
    }
  
    long long mergeSort(long long arr[], int lo, int hi){
        if(lo == hi) return 0LL;
        
        long long ans = 0;
        int mid = lo + (hi-lo)/2;
        ans += mergeSort(arr, lo, mid);
        ans += mergeSort(arr, mid+1, hi);
        ans += merge(arr, lo, mid, hi);
        
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n){
        return mergeSort(arr, 0, n-1);
    }

};
