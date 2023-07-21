class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map to store element index
        unordered_map<int, int> ind;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            // complement to search for in array
            int complement = target-nums[i];

            // if 'complement' was traversed yet (identified by its index value)
            //  a non-zero value of ind[] implies that it was traversed
            // then return curr index and complement's index
            if(ind[complement]) return {i, ind[complement]-1};
            // update curr element after checking for complement
            else ind[nums[i]] = i+1;
        }

        return {};
    }
};
