class Solution{
    public:
        void swapIfGreater(long long arr1[], long long arr2[], int left, int right){
            if(arr1[left] > arr2[right]){
                swap(arr1[left], arr2[right]);
            }
        }
        
        void merge(long long arr1[], long long arr2[], int n, int m){
            // gap method used in shell sort
            int gap = (n+m)/2 + (n+m)%2;
            while(gap){
                int left = 0, right = gap;
                while(right < n+m){
                    // left in arr1, right in arr2
                    if(left < n && right >= n){
                        swapIfGreater(arr1, arr2, left, right-n);
                    }
                    // both in arr1
                    else if(right < n){
                        swapIfGreater(arr1, arr1, left, right);
                    }
                    // both in arr2
                    else{
                        swapIfGreater(arr2, arr2, left-n, right-n);
                    }
                    left++, right++;
                }
                if(gap == 1) break;
                gap = gap/2 + gap%2;
            }
        } 
};
