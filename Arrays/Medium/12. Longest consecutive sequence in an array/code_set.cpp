int longestSuccessiveElements(vector<int>&a) {
    // set to store unique elements of array
    set<int> set;
    int n = a.size();
    for(int i = 0; i < n; i++){
        set.insert(a[i]);
    }

    int maxCnt = 1;
    for(int i = 0; i < n; i++){
        // find the number which begins its sequence
        //  like 4 for the sequence 4, 5, 6, 7
        if(set.find(a[i]-1) == set.end()){
            int cnt = 1, curr = a[i]+1;

            // count the sequence length
            while(set.find(curr) != set.end()){
                cnt++;
                curr++;
            }
            // update maxCnt
            maxCnt = max(maxCnt, cnt);
        }
    }

    return maxCnt;
}
