class Solution {
public:
    void merge(vector<int>&nums, int lo, int mid, int hi){
        vector<int> temp;

        int left = lo, right = mid+1;
        while(left <= mid && right <= hi){
            if(nums[left] > nums[right]){
                temp.push_back(nums[right]);
                right++;
            }
            else{
                temp.push_back(nums[left]);
                left++;
            }
        }
        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= hi){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = lo; i <= hi; ++i){
            nums[i] = temp[i-lo];
        }
    }

    int countPairs(vector<int>&nums, int lo, int mid, int hi){
        int right = mid+1, ans = 0;
        for(int left = lo; left <= mid; ++left){
            while(right <=hi && nums[left] > 2LL*nums[right]) right++;
            ans += (right-(mid+1));
        }

        return ans;
    }

    int mergeSort(vector<int>&nums, int lo, int hi){
        if(lo == hi) return 0;

        int ans = 0;
        int mid = lo + (hi-lo)/2;
        ans += mergeSort(nums, lo, mid);
        ans += mergeSort(nums, mid+1, hi);
        ans += countPairs(nums, lo, mid, hi);
        merge(nums, lo, mid, hi);

        return ans;
    }

    int reversePairs(vector<int>& nums){
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
    }
};
