class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // this function sorts the vector of vectors on first values
        //  in each vector and then on the basis of folowing values
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;
        int n = intervals.size();

        int start = intervals[0][0], end = intervals[0][1], i = 1;
        while(i < n){
            if(end >= intervals[i][0]){
                // update end while intervals can be merged
                end = max(end, intervals[i][1]);
            }
            else{
                // interval can be merged no more
                // push the interval
                mergedIntervals.push_back({start, end});
                // reset start and end
                start = intervals[i][0], end = intervals[i][1];
                continue;
            }
            i++;
        }
        // push last interval
        mergedIntervals.push_back({start, end});

        return mergedIntervals;
    }
};
