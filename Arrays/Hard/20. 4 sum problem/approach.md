`<integer overflow>`
### 4-pointer approach { T -> O(N*4), S -> O(no. of quadruples) }:
1. similar approach as 3-sum
2. fix i, j, vary k, l (k -->   <-- l)
3. to avoid integer overflow, use\
                     `long long sum = nums[i];`\
                     `sum += nums[j];`\
                     `sum += nums[k];`\
                     `sum += nums[l];`
4. overflow is caused by\
                   `long long sum = nums[i]+nums[j]+nums[k]+nums[l];`
