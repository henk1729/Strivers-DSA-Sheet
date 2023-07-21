### Sorting and comparing { T -> O(NlogN+N), S -> O(N) }:
1. sort the vector of vectors\
if vector = [[1, 4], [4, 6], [1, 2]], after sorting -> [[1, 2], [1, 4], [4, 6]] (sorts by first and then second)
2. initialize ans (vector of intervals) with first interval (after sorting)
3. for each interval, if it can be accommodated into last interval, i.e. intervals[i][0] <= ans.back()[1], update last interval's end, i.e. ans.back()[1] = max(ans.back()[1], intervals[i][1])
4. if can't be accommodated, push back new interval
