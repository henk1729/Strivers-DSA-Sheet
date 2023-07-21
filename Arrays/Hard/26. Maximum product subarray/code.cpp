class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long suffixProd = 1, prefixProd = 1, maxProd = INT_MIN;
        for(int i = 0; i < n; i++){
            if(prefixProd == 0) prefixProd = 1;
            if(suffixProd == 0) suffixProd = 1;

            prefixProd *= nums[i];
            suffixProd *= nums[n-1-i];

            maxProd = max(maxProd, max(prefixProd, suffixProd));
        }

        return (int)maxProd;
    }
};
