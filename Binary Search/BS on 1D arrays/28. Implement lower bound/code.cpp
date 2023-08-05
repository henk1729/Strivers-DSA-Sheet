#include<bits/stdc++.h>

// lower bound : index of smallest no. >= target
// upper bound : index of smallest no. >  target
int lowerBound(vector<int> arr, int n, int x) {
	int lo = 0, hi = n-1;
	
	// lower bound lies in the range [0, n]
	// if target (i.e. x) < first ele, lb = 0
	// else if target > last ele, lb = n

	// initialise lb as n and reduce it to appropriate value
	int ans = n;
	
	// region: ! ! ! ! ! ! ! $ $ $ $ $ $ $ $ $ 
	//                    hi lo
	// ! - not answer region
	// $ - answer region

	while(lo <= hi){
		int mid = lo + (hi-lo)/2;

		if(x <= arr[mid]x <= arr[mid]){
			// x <= arr[mid] => mid may be answer, search for better answer in the left subspace
            ans = mid;
			hi = mid-1;
		}
		else{
			// x > arr[mid] => mid is definitely not the answer
			lo = mid+1;
		}
	}

	// lo, ans point to first (smallest) ele >= target
	return ans;
}
