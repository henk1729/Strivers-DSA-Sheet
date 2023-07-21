### 3-pointer approach { T -> O(NlogN+N^2), S -> O(size of triplets) }:
1. sort the arr-> NlogN; still lesser than overall complexity
2. i varies from 0 to n-3; while j < k
3. take 2 ptrs-> j, k; j from i+1 till <k, and k from n-1 till >j
4. evaluate sum (for elements at i, j, k)
5. if sum < target, j++
6. else if sum > target, k--
7. else, store triplet; increment and decrement j and k till they reach respective new values
8. out of while loop, increment i till a new value is encountered- this avoids duplicate triplets
