### Enhanced Merge Sort { T -> O(2*NlogN), S -> O(N) }:
1. similar to "count inversions" problem with a slight modification
2. after mergesorting two halves i.e. the halves are sorted in themselves, count the reverse pairs; make a function to count these pairs- countPairs()
3. in countPairs(), for 'left' ranging from 'lo' to 'mid' (both inclusive)
4. while 'right' (initialised to mid+1) <= 'hi' and arr[left] > 2LL*arr[right], increment right
5. LL ensures 2*arr[right] does not raise integer overflow exception
6. add the count of all the elements to the left of 'right' (not inclusive) to 'ans' i.e. ans += (right-(mid+1))
7. increment left
8. then perform merge() by merging subarray halves (taking temp vector)
9. mergeSort() and countPairs() return ans which is added to 'ans' in mergeSort() and is finally returned to the calling function
