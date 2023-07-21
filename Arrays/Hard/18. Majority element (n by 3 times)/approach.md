### Boyre-Moore voting algorithm { T -> O(2*N), S -> O(1) }:
1. just like majority element (n/2 times), this question checks for the same conditions but for two elements
2. initialise ele1, ele2 to INT_MIN and cnt1, cnt2 to 0
3. traverse thru arr
4. if cnt1 == 0 and arr[i] != ele2, set ele1, increment cnt1
5. else if cnt2 == 0 and arr[i] != ele1, set ele2, increment cnt2
6. else if element matches ele1 or ele2, increment corresponding cnt
7. else, if no match and majority elements set (i.e. cnt 's > 0), decrement cnt's
8. ele1 and ele2 may contain majority elements, run a loop to verify
9. ensure that ele1 and ele2 contain different elements
