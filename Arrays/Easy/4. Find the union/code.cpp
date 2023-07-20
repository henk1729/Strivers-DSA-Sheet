vector < int > sortedArray(vector < int > a, vector < int > b) {
    int na = a.size(), nb = b.size(), ptrA = 0, ptrB = 0;
    vector<int> ans;
    while(ptrA < na && ptrB < nb){
        if(a[ptrA] < b[ptrB]){
            if(ans.size() == 0 || ans.back() != a[ptrA]) ans.push_back(a[ptrA]);
            ptrA++;
        }
        else{
            if(ans.size() == 0 || ans.back() != b[ptrB]) ans.push_back(b[ptrB]);
            ptrB++;
        }
    }
    while(ptrA < na){
        if(ans.size() == 0 || ans.back() != a[ptrA]) ans.push_back(a[ptrA]);
        ptrA++;
    }
    while(ptrB < nb){
        if(ans.size() == 0 || ans.back() != b[ptrB]) ans.push_back(b[ptrB]);
        ptrB++;
    }

    return ans;
}
