### Reverse method:
reverse complete array, then reverse subarrays again\
e.g. arr = [1, 2, 3, 4, 5, 6], k = 2\
rev_arr = [6, 5, 4, 3, 2, 1]\
rev_arr_1 = [5, 6]\
rev_arr_2 = [1, 2, 3, 4]\
final_arr = rev_arr_1 + rev_arr_2 = [5, 6, 1, 2, 3, 4]

### Circular swapping:
if `gcd(n, k) != 1`, assign every `i`th element to `(i+k)%n`th element, one cycle here\
else increment 'i' after every cycle and it will be assigned to '(i+1+k)%|arr|'th element; do this for n/gcd(|arr|, k) cycles
