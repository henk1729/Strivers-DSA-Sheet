class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // nums too small to have a quadruple
        if(nums.size() < 4) return {};

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> quadruples;

        // i, j, k, l -> iterating variables
        for(int i = 0; i < n-3; ++i){
            if(i && nums[i] == nums[i-1]) continue;

            for(int j = i+1; j < n-2; ++j){
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1, l = n-1;
                while(k < l){
                    // avoid integer overflow
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if(sum < target){
                        k++;
                        // avoid duplicates
                        while(k < l && nums[k] == nums[k-1]) k++;
                    }
                    else if(sum > target){
                        l--;
                        // avoid duplicates
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    else{
                        vector<int> v{nums[i], nums[j], nums[k], nums[l]};
                        quadruples.push_back(v);
                        k++;
                        l--;
                        // avoid duplicates
                        while(k < l && nums[k] == nums[k-1]) k++;
                        // avoid duplicates
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }

        return quadruples;
    }
};
