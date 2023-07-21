class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 0 1 2 3 4 - index
        // 1 3 5 4 2 - curr permutation
        // breakPt - 1 (3<5)
        // replacingEleInd - 3 (4>3)
        // swap - 3->4, 4->3
        // 1 4 5 3 2 - swapped
        // reverse after breakPt
        // 1 4 2 3 5 - next permutation

        // breakPt (breakpoint) is the index before which the
        //  permutation does not change
        // it changes from breakPt
        // initialise it to -1
        int breakPt = -1;
        for(int i = nums.size()-2; i >= 0; i--){
            // breakPt is the rightmost index such that it is
            //  lesser than the element following it
            // elements after breakPt are in descending order
            if(nums[i] < nums[i+1]){
                breakPt = i;
                break;
            }
        }

        // if no breakPt in array, means it is reversely ordered
        //  hence, reverse it
        if(breakPt == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // breakPt is to be swapped with smallest element > it
        // resulting part after breakPt index is still descendingly-ordered
        int replacingEleInd = breakPt+1, n = nums.size();
        for(int i = n-1; i > breakPt; i--){
            if(nums[i] > nums[breakPt]){
                replacingEleInd = i;
                break;
            }
        }

        swap(nums[breakPt], nums[replacingEleInd]);
        // reverse this descendingly-ordered subarray
        reverse(nums.begin()+breakPt+1, nums.end());
    }
};
