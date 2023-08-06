int floorOfx(int arr[], int n, int lo, int hi, int x){
	int floorInd = -1;
	while(lo <= hi){
		int mid = lo + (hi-lo)/2;

		if(x >= arr[mid]){
			lo = mid+1;
			floorInd = mid;
		}
		else{
			hi = mid-1;
		}
	}

	return floorInd == -1? -1 : arr[floorInd];
}

int ceilOfx(int arr[], int n, int lo, int hi, int x){
	int ceilInd = n;
	while(lo <= hi){
		int mid = lo + (hi-lo)/2;

		if(x <= arr[mid]){
			hi = mid-1;
			ceilInd = mid;
		}
		else{
			lo = mid+1;
		}
	}

	return ceilInd == n? -1 : arr[ceilInd];
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
  // sorting necessary to perform BS on array
	sort(arr, arr+n);
	
	return {floorOfx(arr, n, 0, n-1, x), ceilOfx(arr, n, 0, n-1, x)};
}
