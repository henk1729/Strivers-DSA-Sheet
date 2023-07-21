`<maths>` `<integer overflow>`
### Mathematical approach { T-> O(N), S -> O(1) }:
1. we have to generate equations-
     sum of arr elements = S, sum of 1 to n = Sn\
     sum of squares of arr elements = S2, sum of 1^2 to n^2 = S2n\
2. for repeating and missing numbers, 'rep' and 'mis'
     val1 = S - Sn = rep - mis\
     val2 = S2 - S2n = rep^2 - mis^2\
     rep = (val2/val1 + val1)/2\
     mis = rep - val1
3. use long long to accommodate sums and also for rest of the variables, typecast size of arr, n into long long (if not already); while summing S2, typecast each element and then multiply-
     // S2 += (long long)arr[i] * (long long)arr[i];
4. typecast back before returning

`<bit manipulation>`
### XOR approach { T -> O(N), S -> O(1) }:
1. initialize a variable x to 0, xor it with all the elements of arr and all the elements from 1 to n
2. xor contains rep^mis (rep = repeating, mis = missing, ^ = xor operation)
3. find rightmost set bit in 'xor'
4. do this by taking AND of 'xor' with 1<<bit, where bit = 0 (initially)
5. now 'bit' stores rightmost-set-bit number in 'xor' e.g. if bit == 2, its 3rd bit from right is the first set bit
6. let num = 1<<bit
7. now two groups will be formed (oneGrp, zeroGrp) for elements in arr and for numbers in range [1, n]- those which have 'bit'th bit set in them and those who don't
8. these groups would have odd no. of elements in them, all other elements would be paired, except rep and mis (both in different groups)
9. traverse all the elements in arr, and numbers in the range 1 to n, and see if their 'bit'th bit is set i.e.\
   
            // if(arr[i] & num) oneGrp ^= arr[i];\
            // else zeroGrp ^= arr[i];
            
            // if((i+1) & num) oneGrp ^= (i+1);
            // else zeroGrp ^= (i+1);
11. traverse the arr once again to check for count of these no.s (zeroGrp, oneGrp)
