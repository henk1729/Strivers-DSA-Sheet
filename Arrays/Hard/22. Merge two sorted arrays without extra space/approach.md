### Two-pointers and sorting approach { T -> O(min(N,M)+NlogN+MlogM), S -> O(1) }:
1. initialise left and right pointers at end and begin of arr1 and arr2 respectively
2. while element at left is greater than that at right, swap i.e. if arr1[left] > arr2[right], swap(arr1[left], arr2[right]) and move left and right away from each other
3. if condition is false, element at left is no more greater, break
4. sort both the arrays
5. the idea is that, the elements (possibly none) at right will be always lesser (since it is at the beginning) than elements at left (since they are at the end)
6. as the pointers move away, difference between elements reduce and will be negative i.e. arr1[left] < arr2[right]; now if we move pointers away still, we'll get even smaller difference, hence break

### Gap method used in Shell sort { T -> O((N+M)+log(N+M)), S-> O(1) }:
1. the idea is to use shell-sorting technique
2. initialize gap as ceil of total length i.e. gap = (n+m)/2 + (n+m)%2
3. while gap > 0
4. set two pointers- left and right, 'gap' index apart i.e. left = 0, right = gap
5. compare elements at these pointers, swap if element at left is greater
6. continue while right < n+m
7. if gap was 1, break
8. reset gap as its ceil, i.e. gap = gap/2 + gap%2
