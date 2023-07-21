### Enhanced Merge sort { T -> O(NlogN), S -> O(N) }:
1. the idea is that the given subarray (at any point of time while merging) can be checked for inversions while merging its sorted halves; the final answer will be an accumulation of all these inversions
2. consider,\
     sorted_arr1 = [2, 3, 6]\
     sorted_arr2 = [1, 2]\
     let left and right point at first indexes of these respective arrays; so\
     if(sorted_arr1[left] > sorted_arr2[right]) i.e. 2 > 1 (here)\
     then, all the elements to the right of 'left' in sorted_arr1 (3 and 6) will also form an inversion with \
     sorted_arr2[right], hence ans will be incremented by len(sorted_arr1)-left
3. we have to perform a slight modification in merge sort
4. pass entire arr to mergeSort(), with lo = 0, hi = n-1
5. mergeSort() partitions the arr into left and right halves, and calls mergeSort() recursively for these halves; it returns ans count; base condition-> if(lo == hi) return 0
6. then these halves are merged using merge() which takes lo, mid, hi
7. a temp vector stores the sorted subarray
8. two pointers- left and right defined at lo and mid+1 respectively
9. compare elements at these indices- if(arr[left] > arr[right]) (this is where they form an inversion), add the count of all the elements to the right of left (left inclusive) to ans since they form an inversion too i.e. ans += (mid-left+1)
10. push elements into temp (the smaller one) and increment corresponding pointer
11. push remaining elements into temp
12. copy temp to arr
13. return ans
14. finally in the function where the first call to mergeSort()  was made, return what it returned i.e. return mergeSort(arr, 0, n-1)
