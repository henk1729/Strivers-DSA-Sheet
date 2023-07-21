class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // store cumulative sum (from some index not necessarily zero) as currSum
        //  and maxSum as the max sum obtained so far (takes care of only neg-ele-array as well)
        int currSum = 0, maxSum = nums[0];

        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i];
            maxSum = max(maxSum, currSum);

            // if currSum is neg, it means the prefix sum is neg
            // hence, ignore the prefix, it can't contribute towards max sum
            // start accumulating from next ele again
            if(currSum < 0) currSum = 0;
        }
        
        return maxSum;
    }
};
