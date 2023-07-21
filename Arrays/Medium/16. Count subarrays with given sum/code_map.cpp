class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // map stores the count of prefix sum
        unordered_map<int, int> prefSum;
        // for prefixSum=0, count should be 1
        prefSum[0] = 1;

        int n = nums.size(), sum = 0, subarrCnt = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            
            // add count to subarrCnt
            // no. of 'sum-k' will be the no. of sum with 'k'
            if(prefSum[sum-k]) subarrCnt += prefSum[sum-k];
            prefSum[sum]++;
        }
        
        return subarrCnt;
    }
};
