class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
map<string, vector<string>>ma;
	string t;
	for(int i=0 ; i<strs.size();i++){
		t = strs[i] ;
		sort(strs[i]. begin(), strs[i].end());
		ma[strs[i]].push_back(t);
		
    }
		vector<vector<string>>out;
		for(auto i : ma) {
			out.push_back(i.second);
			
			} 		
		
		
		
	
return out; 







    }
};
