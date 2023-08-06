
int findStartPos(int arr[], int n, int lo, int hi, int x){
    int startPos = n;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        
        if(x <= arr[mid]){
            startPos = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return (startPos == n || arr[startPos] != x? -1 : startPos);
}

int findEndPos(int arr[], int n, int lo, int hi, int x){
    int endPos = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        
        if(x >= arr[mid]){
            endPos = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return (endPos == -1 || arr[endPos] != x? -1 : endPos);
}

vector<int> find(int arr[], int n , int x ){
    return {findStartPos(arr, n, 0, n-1, x), findEndPos(arr, n, 0, n-1, x)};
}
