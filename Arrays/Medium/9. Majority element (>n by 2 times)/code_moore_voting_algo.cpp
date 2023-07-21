class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // initialise first ele as majority element, and set its count to 0
        int majEle = nums[0], majCnt = 0, n = nums.size();


        for(int i = 0; i < n; i++){
            // increment count for majEle
            if(nums[i] == majEle) majCnt++;
            // else, decrement count
            else{
                majCnt--;
                // if majCnt becomes 0, set curr ele as new majEle
                //  and set its count to 1
                if(majCnt == 0){
                    majEle = nums[i];
                    majCnt = 1;
                }
            }
        }
        // loop to check if 'majEle' is really majority element
        // this is for cases where there is no majority element in array
        majCnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == majEle) majCnt++;
        }

        return (majCnt > n/2? majEle : -1);
    }
};
