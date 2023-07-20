class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k%n && __gcd(n, k%n) == 1){
            int n1 = n, currInd = k%n;
            int prev = nums[0];
            while(n1--){
                int temp = nums[currInd];
                nums[currInd] = prev;
                prev = temp;
                currInd = (currInd+k)%n;
            }
        }
        else{
            if(k%n == 0) return;
            int ind = 0;
            while(ind < __gcd(n, k)){
                int cnt = n/__gcd(n, k), currInd = k+ind;
                int prev = nums[ind];
                while(cnt--){
                    int temp = nums[currInd];
                    nums[currInd] = prev;
                    prev = temp;
                    currInd = (currInd+k)%n;
                }
                ind++;
            }
        }
    }
};
