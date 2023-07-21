### Dutch National Flag Algorithm { T -> O(N), S -> O(1) }:
1. maintain 3 pointers -> zeroEnd, iter, twoBegin
2. sorted zeros end at zeroEnd-1, sorted ones end at iter-1, sorted twos range between twoBegin+1, n-1
3. array contains:
     [0, zeroEnd-1] -> {0}  //contains zeros\
     [zeroEnd, iter-1] -> {1}  //contains ones\
     [iter, twoBegin] -> {0, 1, 2}  //unsorted part; may contain any element\
     [twoBegin, n-1] -> {2}  //contains twos
4. while 3rd division in the array does not get finished i.e. iter <= twoBegin
5. iter is the element being traversed
6. if arr[iter]  == 0, pass it into 1st div i.e. swap zeroEnd, iter, increment both
7. else if arr[iter] == 1, continue in the same direction i.e. increment iter
8. else pass it into last div i.e. swap iter, twoBegin, decrement twoBegin
9. 3rd div shrinks in all the cases
