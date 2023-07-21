class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int x = 0;
        for(int i = 0; i < n; ++i){
            x ^= arr[i];
            x ^= (i+1);
        }
        
        int rightmostSetBit = 0;
        while(1){
            if(x & 1<<rightmostSetBit) break;
            rightmostSetBit++;
        }
        
        int zeroGrp = 0, oneGrp = 0, num = 1<<rightmostSetBit;
        for(int i = 0; i < n; ++i){
            if(arr[i] & num) oneGrp ^= arr[i];
            else zeroGrp ^= arr[i];
            
            if((i+1) & num) oneGrp ^= (i+1);
            else zeroGrp ^= (i+1);
        }
        
        int cnt = 0;
        for(int i = 0; i < n; ++i){
            if(arr[i] == oneGrp) cnt++;
            if(cnt == 2) return {oneGrp, zeroGrp};
        }
        
        return {zeroGrp, oneGrp};
    }
};
