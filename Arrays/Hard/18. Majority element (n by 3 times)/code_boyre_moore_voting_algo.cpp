vector<int> majorityElement(vector<int> v) {
	int n = v.size();
	int majEle1 = INT_MIN, majEle2 = INT_MIN, cnt1 = 0, cnt2 = 0;
	
	vector<int> ans;
	for(int i = 0; i < n; i++){
		if(cnt1 == 0 && v[i] != majEle2){
			majEle1 = v[i];
			cnt1 = 1;
		}
		else if(cnt2 == 0 && v[i] != majEle1){
			majEle2 = v[i];
			cnt2 = 1;
		}
		else if(v[i] == majEle1){
			cnt1++;
		}
		else if(v[i] == majEle2){
			cnt2++;
		}
		else{
			cnt1--;
			cnt2--;
		}
	}

	cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i++){
		if(v[i] == majEle1) cnt1++;
		else if(v[i] == majEle2) cnt2++;
	}

	if(cnt1 > n/3) ans.push_back(majEle1);
	if(cnt2 > n/3) ans.push_back(majEle2);

	return ans;
}
