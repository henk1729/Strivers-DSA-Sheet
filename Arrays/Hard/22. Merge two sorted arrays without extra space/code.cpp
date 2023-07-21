class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto ptr1=nums1.begin(), ptr2=nums2.begin();
        while(n--) nums1.pop_back();
        while(ptr2!=nums2.end()){
            if(ptr1==nums1.end()){
                nums1.push_back(*ptr2);
                ptr2++;
            }
            else if(*ptr1<=*ptr2) ptr1++;
            else{
                nums1.insert(ptr1, *ptr2);
                ptr2++;
            }
        }
    }
};
