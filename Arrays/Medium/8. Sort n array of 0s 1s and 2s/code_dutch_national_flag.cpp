class Solution {
public:
    void sortColors(vector<int>& nums) {
        // elements are arranged in this way:
        // 0 0 0 0 1 1 1 1 2 2 2 2
        //         |     |
        //     zeroEnd  twoBegin
        // zeroEnd marks the end of zeros (just before it)
        // twoBegin marks the begin of twos (just after it)
        // both subarrays [0, zeroEnd) and (twoBegin, n-1] are sorted
        //  and iter traverses the middle portion (unsorted)
        int zeroEnd = 0, twoBegin = nums.size()-1, iter = 0;

        // subarrays [0-iter], and (twoBegin, n-1] are sorted
        // so if iter > twoBegin, entire array is sorted
        while(iter <= twoBegin){
            // iter encounters elements- 0, 1, or 2

            // if 0 found, send it to 0-region
            if(nums[iter] == 0){
                swap(nums[iter], nums[zeroEnd]);
                zeroEnd++;
                iter++;
            }
            // else if 1 found, it belongs here, so continue iterating
            else if(nums[iter] == 1) iter++;
            // else if 2 found, send it to 2-region
            else{
                swap(nums[iter], nums[twoBegin]);
                twoBegin--;
            }
        }
    }
};
