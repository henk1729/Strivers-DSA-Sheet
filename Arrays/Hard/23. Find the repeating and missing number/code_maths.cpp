class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int m) {
        long long n = m;
        long long Sn = n*(n+1)/2, S = 0, S2n = (n*(n+1)*(2*n+1))/6, S2 = 0;
        for(int i = 0; i < n; ++i){
            S += arr[i];
            S2 += (long long)arr[i] * (long long)arr[i];
        }
        
        long long val1 = S-Sn; // rep-mis
        long long val2 = S2-S2n; // rep2-mis2
        val2 = val2/val1; // rep+mis
        long long rep = (val1+val2)/2;
        long long mis = rep-val1;
        
        return {(int)rep, (int)mis};
    }
};
