class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort the array first to arrange elements properly for comparison
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> triplets;
        for(int i = 0; i < n-2; ++i){
            int j = i+1, k = n-1;
            // if nums[i] same as prev, continue
            if(i && nums[i] == nums[i-1]) continue;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];

                // sum less, increase
                if(sum < 0){
                    j++;
                    // to avoid duplicates
                    while(j < k && nums[j] == nums[j-1]) j++;
                }
                // sum more, decrease
                else if(sum > 0){
                    k--;
                    // to avoid duplicates
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
                // sum equal to needed, push triplet
                else{
                    vector<int> v{nums[i], nums[j], nums[k]};
                    triplets.push_back(v);
                    j++;
                    k--;
                    // to avoid duplicates
                    while(j < k && nums[j] == nums[j-1]) j++;
                    // to avoid duplicates
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }

        return triplets;
    }
};
